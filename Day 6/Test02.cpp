//check if a number is 3 digit
//i/p : 343
//o/p : yes or No
#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number : "<<endl;
	cin>>num;
	
	if(num>0){
		if(num>=100 && num<=999){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
