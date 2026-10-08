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
	d.display();
	d.base::display();
	return 0;
}