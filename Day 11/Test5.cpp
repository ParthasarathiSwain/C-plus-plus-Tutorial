// check the number is prime or not

#include <iostream>
using namespace std;

int main(){
	int num=10;
	int i=2;
	int count=0;
	do{
		if(num%i==0){
			count++;
		}
		i++;
	}while(i*i<=num);
	
	if(count>0){
		cout<<"It is Not a prime number !"<<endl;
	}else{
		cout<<"It is a prime number !"<<endl;
	}
	return 0;
}
