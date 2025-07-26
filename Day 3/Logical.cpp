#include <iostream>
using namespace std;

int main(){
	cout<<"(10<20)&&(20>10)  : "<< ((10<20)&&(20>10)) <<endl;//true
	cout<<"(100<20)&&(20>10) : "<< ((100<20)&&(20>10)) <<endl;//false
	
	cout<<"(100>20)||(10>100) :"<<((100>20)||(10>100))<<endl;//true
	
	cout<<"!(10>5) : "<<!(10>5)<<endl;
	return 0;
}
