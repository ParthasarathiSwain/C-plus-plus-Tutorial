#include <iostream>
using namespace std;

int main(){
	int x=3;
	cout<<"-Post Increment-"<<endl;
	cout<<"x   : "<<x<<endl;
	cout<<"x++ : "<< x++ <<endl;//3
	cout<<"x   : "<<x<<endl;//4
	cout<<"--------"<<endl;
	
	cout<<"-Pre Increment-"<<endl;
	int y=5;
	cout<<"y   : "<<y<<endl;
	cout<<"++y : "<< ++y <<endl;//6
	cout<<"y   : "<<y<<endl;
	cout<<"--------"<<endl;
	
	int z=8;
	cout<<"-Post Decrement-"<<endl;
	cout<<"z   : "<<z<<endl;//8
	cout<<"z-- : "<< z-- <<endl;//8
	cout<<"z   : "<<z<<endl;//7
	cout<<"--------"<<endl;
	
	int r=7;
	cout<<"-Pre Decrement-"<<endl;
	cout<<"r   : "<<r<<endl;//7
	cout<<"--r : "<< --r <<endl;//6
	cout<<"r   : "<<r<<endl;//6
	cout<<"--------"<<endl;
	return 0;
}
