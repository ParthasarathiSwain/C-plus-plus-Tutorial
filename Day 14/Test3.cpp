//Search element present inside array
//int x[]={12,23,34,55,44,66,78};
//o/p :  Yes  or No

#include <iostream>
using namespace std;

int main(){
	int search;
	cout<<"Enter Search Element : "<<endl;
	cin>>search;//12
	
	int x[]={12,23,34,55,44,66,78,99,87,64,31,65};
	
	bool found=false;
	for(int index=0;index<=11;index++){
		int num=x[index];
		if(num==search){//78==78
			found=true;
			break;
		}
	}
	if(found){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}
