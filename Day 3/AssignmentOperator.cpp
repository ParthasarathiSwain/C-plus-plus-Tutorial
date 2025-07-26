#include <iostream>
using namespace std;

int main(){
	int a=10;
	cout<<"a=a+5 : "<<(a+=5)<<endl;//a=15
	cout<<"a=a-4 : "<<(a-=4)<<endl;//a=11
	cout<<"a=a*2 : "<<(a*=2)<<endl;//a=22
	cout<<"a=a/2 : "<<(a/=2)<<endl;//a=11
	cout<<"a=a%3 : "<<(a%=3)<<endl;//a=2
	return 0;
}
