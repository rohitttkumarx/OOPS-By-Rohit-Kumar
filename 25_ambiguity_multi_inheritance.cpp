#include<iostream>
using namespace std;

class Employee
{
protected:
	int id;

public:
	void getEmployee()
	{
		cout<<"Enter Employee ID: ";
		cin>>id;
	}

	void show()
	{
		cout<<"Employee ID: "<<id<<endl;
	}
};

class Project
{
protected:
	int id;

public:
	void getProject()
	{
		cout<<"Enter Project ID: ";
		cin>>id;
	}

	void show()
	{
		cout<<"Project ID: "<<id<<endl;
	}
};

class Developer : public Employee, public Project
{
};

int main()
{
	Developer d;
	cout<<"Name: Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;

	d.getEmployee();
	d.getProject();

	cout<<"\nDetails:"<<endl;
	d.Employee::show();
	d.Project::show();

	return 0;
}