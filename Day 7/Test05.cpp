#include <iostream>
using namespace std;

int main(){
	char grade='C';
	
	switch(grade){
		case 'A':
			cout<<"Excellent"<<endl;
			break;
		case 'B':
			cout<<"Good"<<endl;
			break;
		case 'C':
			cout<<"Average"<<endl;
			break;
		case 'D':
			cout<<"Poor"<<endl;
			break;
		default:
			cout<<"Invalid Entry"<<endl;
			break;
	}
	
	return 0;
}
