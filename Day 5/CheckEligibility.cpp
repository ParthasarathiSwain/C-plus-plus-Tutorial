#include <iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter your age : "<<endl;
	cin>>age;
	
	if(age>=18){
		cout<<"You are Eligible !"<<endl;
	}else{
		cout<<"You are Not Eligible !"<<endl;
	}
	
	return 0;
}
