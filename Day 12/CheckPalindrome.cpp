//Check number is Palindrome or not

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number : "<<endl;
	cin>>num;
	//coping  the number
	int temp=num;
	int reverse=0;
	
	for(  ; num>0 ;  ){
		//get last digit
		int lastDigit=num%10;
		//Store the last Digit
		reverse=(reverse*10)+lastDigit;
		//Removing last Digit
		num=num/10;    //or  num/=10;
	}
	if(temp==reverse){
		cout<<"Number is Palindrome !"<<endl;
	}else{
		cout<<"Number is Not palindrome !"<<endl;
	}
	
	return 0; 
}
