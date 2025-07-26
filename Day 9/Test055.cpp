//check if a number is multiple of both 3 and 7

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number : "<<endl;
	cin>>num;
	
	if(num%3==0  && num%7==0){
		cout<<"number is multiple of both 3 and 7 "<<endl;
	}else{
		cout<<"No number is Not multiple of both 3 and 7"<<endl;
	}
	return 0;
}
