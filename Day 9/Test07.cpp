//check if a number ends with 00

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number : "<<endl;
	cin>>num;
	
	if(num%100==0){
		cout<<"Yes This Number ends with 00!"<<endl;
	}else{
		cout<<"No This number is not ends with 00!"<<endl;
	}
	return 0;
}
