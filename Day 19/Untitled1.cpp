#include <iostream>
using namespace std;

class Book{
	public :
		int bookId;
		string bookName;
		double price;
		
	public:
		void read(){
			cout<<"Im reading book"<<endl;
		}
	public :
		void write(){
			cout<<"Im writing from book"<<endl;
		}
};

int main(){
	Book book1,book2;
	//assinging value to book1
	book1.bookId=101;
	book1.bookName="JAVA";
	book1.price=1200;
	
	//printing book1
	cout<<"Book 1"<<endl;
	cout<<"BookId    : "<<book1.bookId<<endl;
	cout<<"BookName  : "<<book1.bookName<<endl;
	cout<<"BookPrice : "<<book1.price<<endl;
	book1.read();
		
	//assinging value to book2
	book2.bookId=102;
	book2.bookName="C++";
	book2.price=600;
	//printing book2
	cout<<"Book 2"<<endl;
	cout<<"BookId    : "<<book2.bookId<<endl;
	cout<<"BookName  : "<<book2.bookName<<endl;
	cout<<"BookPrice : "<<book2.price<<endl;
	book2.write();
	
	return 0;
}




