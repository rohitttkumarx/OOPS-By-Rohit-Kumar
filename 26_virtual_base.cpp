#include<iostream>
using namespace std;

class Person
{
protected:
	int id;

public:
	void getId()
	{
		cout<<"Enter ID: ";
		cin>>id;
	}
};

class Employee : virtual public Person
{
protected:
	int salary;

public:
	void getSalary()
	{
		cout<<"Enter Salary: ";
		cin>>salary;
	}
};

class Manager : virtual public Person
{
protected:
	int bonus;

public:
	void getBonus()
	{
		cout<<"Enter Bonus: ";
		cin>>bonus;
	}
};

class Company : public Employee, public Manager
{
public:
	void display()
	{
		cout<<"\nEmployee ID: "<<id<<endl;
		cout<<"Salary: "<<salary<<endl;
		cout<<"Bonus: "<<bonus<<endl;
		cout<<"Total Income: "<<salary + bonus<<endl;
	}
};

int main()
{
	Company c;
	cout<<"Name: Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	c.getId();
	c.getSalary();
	c.getBonus();
	c.display();

	return 0;
}