#include <iostream>
using namespace std;

int main(){
	int mark;
	cout<<"Enter Your Mark :"<<endl;
	cin>>mark;
	
	
	string res=(mark>=90)?"Grade A":
			   (mark>=80)?"Grade B":
			   (mark>=70)?"Grade C":"Fail";
		
	cout<<"Res : "<<res<<endl;
	return 0;
}
