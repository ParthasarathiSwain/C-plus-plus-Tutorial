#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string myText;
	
	ifstream myReadFile("pns.txt");
	
	//Read the file line by line
	while(getline(myReadFile,myText)){
		cout<<myText<<endl;	
	}
	myReadFile.close();
	return 0;
}
