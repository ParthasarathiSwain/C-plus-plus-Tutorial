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
		int md=(num/10)%10;
		int ld=num%10;
		
		int reverse=ld*100+md*10+fd;
		
		if(num==reverse){
			cout<<"This a palindrome number !"<<endl;
		}else{
			cout<<"This not a palindrome number !"<<endl;
		}
		
	}else{
		cout<<"Invaid number!"<<endl;
	}
	
	return 0;
}
