//check if a 3 digit number is palindrome

//i/p: 111  revesrse= 111 

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a 3 digit number :"<<endl;
	cin>>num;
	
	if(num>99 && num<1000){
		int fd=num/100;
		
		int ld=num%10;
		
		if(fd==ld){
			cout<<"Yes It is Palindrome Number !"<<endl;
		}
		else{
			cout<<"No it is not Palindrome Number !"<<endl;
		}
		
	}else{
		cout<<"Invaid number!"<<endl;
	}
	
	return 0;
}
