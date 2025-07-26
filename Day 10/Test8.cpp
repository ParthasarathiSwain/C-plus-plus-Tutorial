//calculate square of a number between 1 to n.

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter Number :"<<endl;
	cin>>n;
	
	int i=1;
	while(i<=n){
		cout<<"Square of : "<<i<<" = "<<(i*i)<<endl;
		i++;
	}
	
	
	return 0;
}
