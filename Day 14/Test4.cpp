//copy one array to another array

#include <iostream>
using namespace std;

int main(){
	int x[7]={12,23,34,55,44,66,78};
	//x array printing
	for(int i=0;i<=6;i++){
		cout<<"x["<<i<<"] = "<<x[i]<<endl;
	}
	cout<<"+++++++ Coping x[] to Y[] ++++++"<<endl;
	
 	int y[7];
 	for(int i=0;i<=6;i++){
		y[i]=x[i];
	}
 	
	//y array printing
	for(int i=0;i<=6;i++){
		cout<<"y["<<i<<"] = "<<y[i]<<endl;
	}
	
	
	return 0;
}
