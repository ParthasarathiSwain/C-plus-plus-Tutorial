//check if a number is divisible by 3 and 7
//i/p : 21
//o/p : Yes or No
#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number : "<<endl;
	cin>>num;
	
	if(num%3==0 && num%7==0){
		cout<<"Yes Number is Divigible by 3 and 7 !"<<endl;
	}else{
		cout<<"No Number is not Divigible by 3 and 7 !"<<endl;
	}
	return 0;
}
