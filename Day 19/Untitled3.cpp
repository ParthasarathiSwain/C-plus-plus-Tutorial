#include <iostream>
using namespace std;
class Dog{
	//variable
	private:
		string dogName;
	
	//function	
	public :
		void setDogName(string dn){
			dogName=dn;
		}	
	
};

int main(){
	Dog d1;
	d1.setDogName("Tommy");
//	cout<<d1.dogName<<endl;
	return 0;
}
