//Reverse a 3 digit number
//i/p : 543   o/p : 345

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a 3 Digit Number :"<<endl;
	cin>>num;
	
	if(num>=100 && num<1000){
		int fd=num/100;
		int md=(num/10)%10;
		int ld=num%10;
		
		int reverse=ld*100+md*10+fd;
		cout<<"Reverse is : "<<reverse<<endl;
	}else{
		cout<<"Wrong entry!"<<endl;
	}
}
