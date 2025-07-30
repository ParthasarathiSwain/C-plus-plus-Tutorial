#include <iostream>
using namespace std;

int main(){
	//array declaration with initialization
	int y[6];
	
	for(int i=0;i<6;i++){
		cout<<"Enter Value of y["<<i<<"]"<<endl;
		cin>>y[i];  //y[0]  y[1]  y[2]  y[3]  y[4]  y[5]
	}
	
	
	
	//accessing x array or printing all elements
	for(int i=0;i<6;i++){
		cout<<"y["<<i<<"] = "<<y[i]<<endl;
	}
	
	
	//sum all element
	int sum=0;
	for(int i=0;i<6;i++){
		sum=sum+y[i];
	}
	cout<<"Total Sum : "<<sum<<endl;
	
	
	//reverse all elements
	for(int i=5;i>=0;i--){
		cout<<"y["<<i<<"] = "<<y[i]<<endl;
	}
	return 0;
}
