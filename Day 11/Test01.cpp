//calculate sum of n natural number

#include <iostream>
using namespace std;

int main(){
	int n,i=1,sum=0;
	cout<<"Enter value of N :"<<endl;
	cin>>n;
	
	while(i<=n){
		sum=sum+i;
		i++;
	}
	cout<<"Sum : "<<sum<<endl;
	return 0;
}
