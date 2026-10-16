/*b) A university wants to organize information about its staff
members using object-oriented principles. Common information
such as employee ID, name and contact details is maintained for
every employee, while different categories such as Faculty,
LaboratoryStaff and OfficeStaff have their own additional
information.
Design an appropriate class hierarchy and define suitable
constructors/member functions to create staff records and retrieve
the details of an individual employee when required. Clearly
identify the relationship among the classes and the functions
needed for accessing the information*/


#include<iostream>
using namespace std;

class Employee{
	public:
	int id;
	string name,contact;

	Employee(int i,string n,string c){
		id=i;
		name=n;
		contact=c;
	}

	void display(){
		cout<<"Employee ID: "<<id<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Contact: "<<contact<<endl;
	}
};

class Faculty:public Employee{
	public:
	string subject;

	Faculty(int i,string n,string c,string s):Employee(i,n,c){
		subject=s;
	}

	void show(){
		display();
		cout<<"Subject: "<<subject<<endl;
	}
};

class LaboratoryStaff:public Employee{
	public:
	string lab;

	LaboratoryStaff(int i,string n,string c,string l):Employee(i,n,c){
		lab=l;
	}

	void show(){
		display();
		cout<<"Lab Name: "<<lab<<endl;
	}
};

class OfficeStaff:public Employee{
	public:
	string dept;

	OfficeStaff(int i,string n,string c,string d):Employee(i,n,c){
		dept=d;
	}

	void show(){
		display();
		cout<<"Department: "<<dept<<endl;
	}
};

int main(){
	cout<<"Name:Rohit kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	Faculty f(101,"Rohit","9876543210","CSE");
	LaboratoryStaff l(102,"Aman","9876543211","Computer Lab");
	OfficeStaff o(103,"Raj","9876543212","Accounts");

	cout<<"Faculty Details"<<endl;
	f.show();

	cout<<"Laboratory Staff Details<"<<endl;
	l.show();

	cout<<"Office Staff Details"<<endl;
	o.show();

	return 0;
}