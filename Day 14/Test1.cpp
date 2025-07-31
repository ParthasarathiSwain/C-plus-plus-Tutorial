//count even and odd

#include <iostream>
using namespace std;

int main(){
	int x[]={12,23,34,55,44,66,78};
	int even=0,odd=0;
	
	for(int index=0;index<=6;index++){
		int num=x[index];
		if(num%2==0){
			even++;
		}else{
			odd++;
		}
	}
	cout<<"Total Even : "<<even<<endl;
	cout<<"Total Odd  : "<<odd<<endl;
	return 0;
}





