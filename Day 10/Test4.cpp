//print even & odd number between 1 to 100

#include <iostream>
using namespace std;

int main(){
	int startPoint=1;
	int endPoint=100;
	
	while(startPoint<=endPoint){
		//even number print
		if(startPoint%2==0){
			cout<<"even : "<<startPoint<<endl;
		}
		else{
				cout<<"odd : "<<startPoint<<endl;
		}
		startPoint++;
	}
	
	return 0;
}
