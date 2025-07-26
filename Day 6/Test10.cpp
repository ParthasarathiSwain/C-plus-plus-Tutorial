//nested if else
//check number is divigible by 9

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number : "<<endl;
	cin>>num;
	if(num>0){//99>0  true
		if(num%9==0){
			cout<<"Yes Divisible"<<endl;
		}else{
			cout<<"Not divisible"<<endl;
		}
	}else{
		cout<<"Do not enter number as zero"<<endl;
	}
	return 0;
}
