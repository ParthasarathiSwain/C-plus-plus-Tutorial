//single level inheritance

#include <iostream>
using namespace std;
//parent class or super class or base class
class Parent{
	private :
		string farmHouse="vanatara";
		
	public :
		int balance =9000;
	
	public :
		void driveCar(){
			cout<<"drive car function"<<endl;
		}
};

//child class or derived class 
class Child : public Parent{
	
	public :
		void ownHouse(){
			cout<<"child own house"<<endl;
		}
};

int main(){
	Child c1;
	c1.driveCar();
	c1.ownHouse();
	cout<<c1.balance<<endl;
//	cout<<c1.farmHouse<<endl;
	//child will access all properties of parent
	//except private properties
	Parent p1;
	p1.driveCar();
//	p1.ownHouse();  parent will not access 
//                  childs properties
return 0;
}
