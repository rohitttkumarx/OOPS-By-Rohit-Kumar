#include<iostream>
using namespace std;

class Addition
{
	int a,b;

	public:
		void getData()
		{
			cout<<"Enter two numbers: ";
			cin>>a>>b;
		}

		void display()
		{
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}

		Addition operator+(Addition obj)
		{
			Addition temp;

			temp.a = a + obj.a;
			temp.b = b + obj.b;

			return temp;
		}
};

int main()
{
	Addition obj1,obj2,obj3;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;

	cout<<"Enter first object values:"<<endl;
	obj1.getData();

	cout<<"\nEnter second object values:"<<endl;
	obj2.getData();

	cout<<"\nFirst object:"<<endl;
	obj1.display();

	cout<<"\nSecond object:"<<endl;
	obj2.display();

	obj3 = obj1 + obj2;

	cout<<"\nAfter binary addition:"<<endl;
	obj3.display();

	return 0;
}