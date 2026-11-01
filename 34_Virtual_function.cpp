#include<iostream>
using namespace std;

class Base
{
	public:
		virtual void display()
		{
			cout<<"Display function of Base class"<<endl;
		}

		void show()
		{
			cout<<"Show function of Base class"<<endl;
		}
};

class Derived : public Base
{
	public:
		void display()
		{
			cout<<"Display function of Derived class"<<endl;
		}

		void show()
		{
			cout<<"Show function of Derived class"<<endl;
		}
};

int main()
{
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	Base *ptr;
	Base b;
	Derived d;

	ptr = &b;

	cout<<"Base class pointer pointing to Base object:"<<endl;
	ptr->display();
	ptr->show();

	ptr = &d;

	cout<<"\nBase class pointer pointing to Derived object:"<<endl;
	ptr->display();
	ptr->show();

	return 0;
}