#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter value of a :"<<endl;
	cin>>a;//20
	cout<<"Enter value of b :"<<endl;
	cin>>b;//10
	
	string res=(a<b)?"Yes True":"No False";
			//20<10
	cout<<"Res : "<<res<<endl;
	return 0;
}
