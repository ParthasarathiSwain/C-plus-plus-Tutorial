//Check if number is a perfect
//defination  : A perfect nuber is equal to the sum of its proper divisior
//ex :  28 = 1,2,4,7,14    1+2+4+7+14=28

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number : "<<endl;
	cin>>num;
	int sum=0;
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	
	if(num==sum){
		cout<<"Number is Perfect Number !"<<endl;
	}else{
		cout<<"Number is Not Perfect!"<<endl;
	}
	return 0;
}
