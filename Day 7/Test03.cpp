#include <iostream>
using namespace std;

int main(){
	int temp=-25;
	
	if(temp>=30){
		cout<<"Hot"<<endl;
	}else if(temp>=20){
		cout<<"Warm"<<endl;
	}else if(temp>=10){
		cout<<"Cool"<<endl;
	}else{
		cout<<"cold"<<endl;
	}
	return 0;
}
