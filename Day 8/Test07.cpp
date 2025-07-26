//Write a program to print number of days in a month based on month number.
#include <iostream>
using namespace std;

int main(){
	int mn;
	cout<<"Enter Month Number 1-12 :"<<endl;
	cin>>mn;
	
	if(mn==2){
		cout<<"28 or 29 days!"<<endl;
	}else if(mn==4 || mn==6 || mn==9 || mn==11){
		cout<<"30 days !"<<endl;
	}else{
		cout<<"31 days !"<<endl;
	}
	return 0;
}
