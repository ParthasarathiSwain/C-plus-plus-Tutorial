//simple calculator

#include <iostream>
using namespace std;
	//adition function
	void add(int a,int b){
		cout <<"Addition is : "<<a+b<<endl;
	}
	//substraction function
	void sub(int a,int b){
		cout <<"Substraction is : "<<a-b<<endl;
	}
	//Multiple function
	void mul(int a,int b){
		cout <<"Multiple is : "<<a*b<<endl;
	}
	
	//Division function
	void div(int a,int b){
		if(a>0 && b>0){
			cout <<"Division is : "<<a/b<<endl;
		}else{
			cout <<"Don't enter zero!'"<<endl;
		}
	}
int main(){
	bool b=true;
	int choice;
	while(b){
		cout<<"1- addition"<<endl;
		cout<<"2- substraction"<<endl;
		cout<<"3- multiple"<<endl;
		cout<<"4- Division"<<endl;
		cout<<"5- exit"<<endl;
		
		cin>>choice;
		
		switch(choice){
			case 1:{
				int a,b;
				cout<<"Enter value of a : "<<endl;
				cin>>a;
				cout<<"Enter value of b : "<<endl;
				cin>>b;
				
				add(a,b);
				break;
			}
			case 2:{
				int a,b;
				cout<<"Enter value of a : "<<endl;
				cin>>a;
				cout<<"Enter value of b : "<<endl;
				cin>>b;
				
				sub(a,b);
				break;
			}
			case 3:{
				int a,b;
				cout<<"Enter value of a : "<<endl;
				cin>>a;
				cout<<"Enter value of b : "<<endl;
				cin>>b;
				
				mul(a,b);
				break;
			}
			case 4:{
				int a,b;
				cout<<"Enter value of a : "<<endl;
				cin>>a;
				cout<<"Enter value of b : "<<endl;
				cin>>b;
				
				div(a,b);
				break;
			}
			case 5:{
				b=false;
				break;
			}
			default:{
				cout<<"Please enter 1-5 number !"<<endl;
				break;
			}
		}
		
	}
	
	return 0;
}
