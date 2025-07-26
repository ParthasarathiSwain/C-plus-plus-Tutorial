//check if a number is single-digit
#include <iostream>
using namespace std;

int main(){
	int num=99;
	if(num>0 && num<10){
		cout<<"It is single-digit!"<<endl;
	}else{
		cout<<"It is not single-digit!"<<endl;
	}
	return 0;
}
