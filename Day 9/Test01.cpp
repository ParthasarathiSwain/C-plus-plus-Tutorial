//Find largest among three numbers
#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"enter first Num : "<<endl;
	cin>>a;
	cout<<"enter second Num : "<<endl;
	cin>>b;
	cout<<"enter third Num : "<<endl;
	cin>>c;
	
	if(a>b  && a>c){
		cout<<"a is Greater !"<<endl;
	}else if(b>a && b>c){
		cout<<"b is greater !"<<endl;
	}else{
		cout<<"C is greater !"<<endl;
	}
	
	return 0;
}
