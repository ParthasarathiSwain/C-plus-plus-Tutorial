//All digits same(only 3-digit num)
//i/p : 676
#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a 3-digit number :"<<endl;
	cin>>num;
	
	if(num>99  && num<1000){
		int fd=num/100;
		int md=(num/10)%10;
		int ld=num%10;
		
		if(fd==md && md==ld){
			cout<<"Yes All digits are same !"<<endl;
		}else{
			cout<<"No Not Same !"<<endl;
		}
		
	}else{
		cout<<"Invalid Input !"<<endl;
	}
	
	return 0;
}
