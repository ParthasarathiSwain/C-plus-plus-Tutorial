//Count Positive ,Negative and Zero element
// int arr[]={10,-3,0,-4,-8,30,70,90};
//o/p:
//Total +ve : 4, Total -ve : 3, Total Zero : 1

#include <iostream>
using namespace std;

int main(){
	int arr[]={10,-3,0,-4,-8,30,70,90};
	
	int pos=0,nev=0,z=0;
	
	for(int index=0;index<=7;index++){
		int	num=arr[index];
		if(num>0){
			pos++;
		}else if(num<0){
			nev++;
		}else{
			z++;
		}
	}
	cout<<"Total Positive :"<<pos<<endl;
	cout<<"Total Negative :"<<nev<<endl;
	cout<<"Total Zero     :"<<z<<endl;
	
	return 0;
}













