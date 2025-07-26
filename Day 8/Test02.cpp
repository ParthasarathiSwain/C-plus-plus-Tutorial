//WAP to check lastdigit of a number even or odd
// i/p : 567   //last digit =7

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number :"<<endl;
	cin>>num;
	
	int lastDigit=num%10;
	
	cout<<"Last Digit :"<<lastDigit<<endl;
	
	if(lastDigit%2==0){
		cout<<"Last Digit is Even!"<<endl;
	}else{
		cout<<"Last Digit is Odd!"<<endl;
	}
	return 0;
}
