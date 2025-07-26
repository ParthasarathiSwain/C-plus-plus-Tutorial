//check if number is divisible by by 4 but not 8.

#include <iostream>
using namespace std;

int main(){
	int num=12;
	if(num%4==0 && num%8!=0){
		cout<<"Divisible by 4 but not 8!"<<endl;
	}else{
		cout<<"Not satisfy the condition"<<endl;
	}
	return 0;
}
