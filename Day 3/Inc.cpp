#include <iostream>
using namespace std;

int main(){
	int x=5;
	cout<<"Before inc X : "<<x<<endl;
	
	int res=x++ + ++x;
	cout<<"res : "<<res<<endl;
	
	cout<<"After inc X : "<<x<<endl;
	return 0;
}
