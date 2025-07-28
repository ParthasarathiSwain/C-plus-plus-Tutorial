//find factorial of 5

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number : "<<endl;
	cin>>num;
	
	int i=1;
	int res=1;
	while(i<=num){
		res=res*i;
		i++;
	}
	cout<<"Factorial is  : "<<res<<endl;
	return 0;
}
