#include <iostream>
using namespace std;

int main(){
	int x[2][2];
				
	for(int row=0;row<2;row++){
		for(int col=0;col<2;col++){
			cout<<"Enter value of x["<<row<<"]["<<col<<"] : "<<endl;
			cin>>x[row][col];
		}
	}
	
	cout<<"You have entered :"<<endl;
	for(int row=0;row<2;row++){
		for(int col=0;col<2;col++){
			cout<<"x["<<row<<"]["<<col<<"] = "<<x[row][col]<<endl;
		}
	}
	return 0;
}
