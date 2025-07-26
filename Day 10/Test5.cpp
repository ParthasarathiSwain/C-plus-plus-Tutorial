#include <iostream>
using namespace std;

int main(){
	int capacity=60;
	int student=1;
	
	while(student<=capacity){
		char atd;
		cout<<"Enter Your attendance Student Number :"<<student<<endl;
		cin>>atd;
		if(atd=='Y'){
			cout<<"Student : "<<student<<" Is Present"<<endl;
		}else{
			cout<<"Student : "<<student<<" Is Absent"<<endl;
		}
		student++;
	}
}
