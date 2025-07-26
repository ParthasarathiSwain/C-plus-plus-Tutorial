#include <iostream>
using namespace std;

int main(){
	int a=10;//equal
	int b=20;
	//double equal
	cout<<"a==b : "<<(a==b)<<endl;//true or 1, //false or 0
	//less than
	cout<<"a<b  : "<<(a<b)<<endl;//true means 1
	//grater than
	cout<<"a>b  : "<<(a>b)<<endl;//false means 0
	
	int x=80;
	int y=40;
	//grater than equal
	cout<<"x>=y : "<<(x >= y)<<endl;//true
	//less than equal
	cout<<"x<=y : "<<(x <= y)<<endl;//false
	
	int d=50;
	//not equal
	cout<<"d!=30 :"<<(d!=30)<<endl;//true
	cout<<"d!=50 :"<<(d!=50)<<endl;//false
	return 0;
}
