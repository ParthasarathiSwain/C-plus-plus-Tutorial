// WAP to find sum of first and last digit(only 3 digit)
// i/p :  567   //o/p :  5+7=11

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a 3 Digit number : "<<endl;
	cin>>num;
	
	if(num>=100 && num<=999){
		int fd=num/100;
		int ld=num%10;
		int sum=fd+ld;
		
		cout<<"Sum is : "<<sum<<endl;
	}
	else{
		cout<<"Invalid Input!"<<endl;
	}
	return 0;
}
