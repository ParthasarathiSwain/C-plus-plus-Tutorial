#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
//	string s1="opent echz";
//	cout<<"Length() : "<<s1.length()<<endl;
	
//	string s2="opent echz";
//	cout<<"size() : "<<s2.size()<<endl;

//	string s3="Tiger";
//	cout<<"at(indexNo) : "<<s3.at(3)<<endl;
//	cout<<"at(indexNo) : "<<s3.at(100)<<endl;//Compile time Error

//	string s4="Lion";
//	cout<<"front() : "<<s4.front();//output :L(First charecter)


	string str1 = "Partha "; 
	string str2 = "World!"; 
	str2.append(str1); 
//	cout << "Appended: " << str2<<endl;//World!Partha
	
	
	string str3 = "Partha"; 
//	cout<<"length :"<<str3.length()<<endl;
//	str3.clear();
//	cout<<"length :"<<str3.length()<<endl;

	string a = ""; 
	string b = "banana"; 
//	cout << "Compare: " << b.compare(a); //assic value 98-97=1
	
//	cout<<"empty() : "<<a.empty()<<endl;

	string str4 = "Hello World!"; 
    str4.erase(1, 4); 
 //   cout << str4<<endl; 


	string str5 = "welcome to programming world"; 
	cout << "search : " << str5.find("programming")<<endl; 
	return 0;
}
