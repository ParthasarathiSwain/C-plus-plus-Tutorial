//print the last digit of a number
// i/p : 567   //last digit =7

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number :"<<endl;
	cin>>num;
	
	int lastDigit=num%10;
	cout<<"Last Digit :"<<lastDigit<<endl;
	
	
	return 0;
}
