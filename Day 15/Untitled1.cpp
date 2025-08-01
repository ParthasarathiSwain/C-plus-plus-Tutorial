#include <iostream>
using namespace std;

int main(){
	int x[3][5]={
					{10,20,30,40,50},//row=0
					{60,70,80,90,99},//row=1
					{12,13,14,15,16} //row=2	
				};
				
	for(int row=0;row<3;row++){
		
		for(int col=0 ;col<5;col++){
			cout<<"x["<<row<<"]["<<col<<"] = "<<x[row][col]<<endl;
		}
		cout<<"-----------"<<endl;
	}
	return 0;
}
