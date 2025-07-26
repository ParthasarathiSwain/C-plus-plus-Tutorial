//check if a number is divisible by 2 or 3.
#include <iostream>
using namespace std;

int main(){
	int num=67;
	
	if(num%2==0 || num%3==0){
		cout<<"Yes Divisible !"<<endl;
	}else{
		cout<<"Not Divisible !"<<endl;
	}
	return 0;
}
