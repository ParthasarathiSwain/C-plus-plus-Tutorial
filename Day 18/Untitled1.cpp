#include <iostream>
using namespace std;

class Laptop{
	//information
	private:
		string brandName;
		string modelNo;
		double price;
		string processor;
		
	//behaviour
	void allFeature(){
		cout<<"All Feature of laptop"<<endl;
	}
	void buyNow(){
		cout<<"Laptop buy"<<endl;
	}
		
};//class end

int main(){
	 Laptop   lap1,lap2,lap3;
	 
	 lap1.brandName="Dell";
	 lap1.modelNo="WWWTTDELL";
	 lap1.price=90000.0;
	 lap1.processor="Intel corei7";
	// lap1.allFeature();
	 cout<<"Laptop-1 "<<endl;
	 cout<<"brand Name : "<<lap1.brandName<<endl;
	 cout<<"Model No   : "<<lap1.modelNo<<endl;
	 cout<<"Price      : "<<lap1.price<<endl;
	 cout<<"Processor  : "<<lap1.processor<<endl;
	 
	 lap2.brandName="HP";
	 lap2.modelNo="HP0011";
	 lap2.price=80000.0;
	 lap2.processor="Intel corei8";
	 cout<<"Laptop-2 "<<endl;
	 cout<<"brand Name : "<<lap2.brandName<<endl;
	 cout<<"Model No   : "<<lap2.modelNo<<endl;
	 cout<<"Price      : "<<lap2.price<<endl;
	 cout<<"Processor  : "<<lap2.processor<<endl;
	 
	 
	 lap3.brandName="Assus";
	 lap3.modelNo="Assus0033";
	 lap3.price=40000.0;
	 lap3.processor="Intel corei9";
	 cout<<"Laptop-3 "<<endl;
	 cout<<"brand Name : "<<lap3.brandName<<endl;
	 cout<<"Model No   : "<<lap3.modelNo<<endl;
	 cout<<"Price      : "<<lap3.price<<endl;
	 cout<<"Processor  : "<<lap3.processor<<endl;
	// lap2.allFeature();
	// lap2.buyNow();
	return 0;
}













