#include <iostream>
using namespace std;

	int addOperation(){
		int a=10,b=20;
		int res=a+b;
		
		return res;
	}
    
    void subOperation(){
    	int a=20,b=10;
    	int res=a-b;
    	cout<<"Result of sub :"<<res<<endl;
	}
	
	void  add(int a , int b){
	    int res=a+b;
	    cout<<"Res" <<res<<endl;
	}

   	int  addition(int a , int b){
	    return a+b;
	}
	
	
	int main(){
		int	result=addOperation();
		cout<<result<<endl;
		
		subOperation();
		
		add(10,40);
		add(20,40);
		add(50,40);
		add(80,40);
		
		int res=addition(30,60);
		cout<<"Result of addition opperation : "<<res<<endl;
		
		return 0;
	}
