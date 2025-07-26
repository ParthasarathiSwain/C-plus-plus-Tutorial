//check if a number ends with 0.
// i/p :  60 ,87    
// o/p : Yes or NO
#include <iostream>
using namespace std;

int main(){
	int num=32;
	if(num%10==0){
		cout<<"Ends with 0"<<endl;
	}else{
		cout<<"Does not End with 0"<<endl;
	}
	return 0;
}

