#include<iostream>
using namespace std;
class Library{
	public:
	int bookid;
	string bookname;
	Library(int bookid,string bookname){
		this->bookid=bookid;
		this->bookname=bookname;
	}
	void display(){
		cout<<"Book ID:"<<bookid<<endl;
		cout<<"Book Name:"<<bookname<<endl;
	}
};
int main(){
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	Library l1(101,"object oriented programming");
	Library l2(102,"Data structure");
	l1.display();
	l2.display();
	return 0;

}