#include<iostream>
using namespace std;
class base{
	public:
	void display(){
		cout<<"This is base class"<<endl;

	}
};
class derived:public base{
	public:
	void display(){
		cout<<"This is derived class"<<endl;
	}
};
int main(){
	derived d;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	d.display();
	d.base::display();
	return 0;
}