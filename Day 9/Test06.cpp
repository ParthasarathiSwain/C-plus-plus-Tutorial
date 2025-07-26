//check if a number contains digit 5 or not (only 3-digit number)
#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a 3-digit number : "<<endl;
	cin>>num;
	
	int fd=num/100;
	int md=(num/10)%10;
	int ld=num%10;
	
	if(fd==5 || md==5 || ld==5){
		cout<<"Yes It Contain digit-5 !"<<endl;
	}else{
		cout<<"No It does not contain digit-5!"<<endl;
	}
	return 0;
}
