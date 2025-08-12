#include <iostream>
#include <ofstream>
using namespace std;

int main(){
	
	//create and open a text file
	ofstream myFile("pns.txt");
	
	//write to the file
	myFile<<"Welcome to Pns Collage";
	
	myFile.close();
	return 0;
}


