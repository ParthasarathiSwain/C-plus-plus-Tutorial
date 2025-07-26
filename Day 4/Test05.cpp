#include <iostream>
using namespace std;

int main(){
	int age;
	cout<<"Enter value of age :"<<endl;
	cin>>age;
	string res=(age>=18)?(age>=50)?"Senior Eligible":"Eligible,not Senior":"Not Eligible";
		
	cout<<"Res : "<<res<<endl;
	return 0;
}
