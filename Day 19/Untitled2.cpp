#include <iostream>
using namespace std;

class Lion{
	public:
		static string JUNGLE;
		
	public:
		string lname;
		double height;
		double weight;
		
	//parameter  constructor
	Lion(string ln,double h,double w){
		lname=ln;
		height=h;
		weight=w;
	}

	//no-parameterise constructor	
	Lion(){
		cout<<"No-param Cons"<<endl;
	}
	
	//Destructor
	~Lion(){
	    cout<<"Lion Destructor called"<<endl;	
	}	
};//class end


string Lion::JUNGLE="JIM National";

int main(){
	Lion l1("Ram",5.6,300);//param-constructor
	
	cout<<"Lion 1"<<endl;
	cout<<"lname  : "<<l1.lname<<endl;
	cout<<"height : "<<l1.height<<endl;
	cout<<"weight : "<<l1.weight<<endl;
	
	Lion l2("Hari",4.5,150);
	cout<<"Lion 2"<<endl;
	cout<<"lname  : "<<l2.lname<<endl;
	cout<<"height : "<<l2.height<<endl;
	cout<<"weight : "<<l2.weight<<endl;
	
	Lion l3;
	
	
	cout<<Lion::JUNGLE<<endl;
	
	
	return 0;
}
