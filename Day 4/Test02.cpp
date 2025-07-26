#include <iostream>
using namespace std;

int main(){
	int x=0;
	int res= x++  +  ++x  + --x  +  x-- + x;
	cout<<"Res : "<<res<<endl;//res=4
	cout<<"x : "<<x<<endl;//x=0
	
	int y=5;
	y++;
	cout<<"y : "<<y<<endl;//y=6
	int r= --y  +  y--  + ++y  +  ++y  + y++ ;
	cout<<"R : "<<r<<endl;//r=
	cout<<"y : "<<y<<endl;//y=
	
	int z=9;
	int t=z++ +  ++z;
	cout<<"t : "<<t<<endl;//z=
	
	return 0;
}
