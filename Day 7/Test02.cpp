#include <iostream>
using namespace std;

int main(){
	int mark;
	cout<<"Enter Mark : "<<endl;
	cin>>mark;//78
	
	if(mark>=80 && mark<=100){//78>=80  //false
		cout<<"A Grade"<<endl;
	}else if(mark>=70 && mark<80){//78>=70  &&  78<80
		cout<<"B Grade"<<endl;
	}else if(mark>=50 && mark<70){
		cout<<"C Grade"<<endl;
	}else if(mark>=30 && mark<50){
		cout<<"D Grade"<<endl;
	}else{
		cout<<"Fail"<<endl;
	}
	
	return 0;
}
