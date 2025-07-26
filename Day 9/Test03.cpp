//coutn 0 digit in a 3-digit number ;
#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter 3-digit Number : "<<endl;
	cin>>num;
	
	int fd=num/100;
	int md=(num/10)%10;
	int ld=num%10;
	
	int count;
	
	if(fd==0){
		count++;
	}
	if(md==0){
		count++;
	}
	if(ld==0){
		count++;
	}
	cout<<"Number Zeros :"<<count<<endl;
	return 0;
}
