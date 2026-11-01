#include<iostream>
using namespace std;
class number{
	int x,y;
	public:
	void getdata(){
		cout<<"Enter first number:";
		cin>>x;
		cout<<"Enter second number:";
		cin>>y;	
	}
	void display(){
		cout<<"First Number:"<<x<<endl;
		cout<<"Second Number:"<<y<<endl;
	}
	void operator-(){
		x=-x;
		y=-y;
	}
};
int main(){
	number n;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:25141669"<<endl;
	cout<<"CRN:2515244"<<endl;
	n.getdata();
	cout<<"\nOriginal Number:"<<endl;
	n.display();
	-n;
	cout<<"\nAfter Overloading unay minus:"<<endl;
	n.display();
	return 0;
	
}