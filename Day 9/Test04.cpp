//check if middle digit is largest
#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a 3-digit number :"<<endl;
	cin>>num;
	
	int fd=num/100;
	int md=(num/10)%10;
	int ld=num%10;
	
	if(md>fd && md>ld){
		cout<<"Middle Digit is Largest!"<<endl;
	}else{
		cout<<"No It is Not"<<endl;
	}
	
	return 0;
}
