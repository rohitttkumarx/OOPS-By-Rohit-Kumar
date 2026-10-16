/*a) A cinema wants to automate ticket billing for its customers.
The ticket price depends on the category selected: Silver, Gold, or
Premium. A customer may also purchase more than one ticket.
Senior citizens receive a fixed discount, while an additional
service charge is applied when the bill crosses a specified amount.
Develop an object-oriented program that accepts the customer
name, ticket category and number of tickets, applies the
appropriate pricing, discount and service charge, and generates
the final bill. Use suitable classes and member functions.*/


#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class cinema{
	public:
	string name,catg;
	int ticketNO;
	float discount=0,total=0,price=0,service=0,bill=0;
	string senior;

	void getdata(){
		cout<<"Enter customer name: ";
		getline(cin,name);
		cout<<"Enter category(silver,gold,premium): ";
		getline(cin,catg);
		cout<<"Enter Number of tickets: ";
		cin>>ticketNO;
		cout<<"Is person senior citizen(Y/N): ";
		cin>>senior;
	}

	bool calculateBill(){
		if(catg=="Silver"||catg=="silver"){
			price=150;
		}
		else if(catg=="Gold"||catg=="gold"){
			price=250;
		}
		else if(catg=="Premium"||catg=="premium"){
			price=400;
		}
		else{
			cout<<"Invalid category!";
			return false;
		}

		total=price*ticketNO;

		if(senior=="Y"||senior=="y"){
			discount=total*0.10;
		}

		total=total-discount;
		bill=total;

		if(total>1000){
			service=total*0.05;
			bill=total+service;
		}

		return true;
	}

	void display(){
		cout<<fixed<<setprecision(2);
		cout<<"\n----Cinema Ticket Bill----\n";
		cout<<"Name: "<<name<<endl;
		cout<<"Ticket Category: "<<catg<<endl;
		cout<<"No. of Tickets: "<<ticketNO<<endl;
		cout<<"Price per ticket: Rs. "<<price<<endl;
		cout<<"Senior citizen discount: Rs. "<<discount<<endl;
		cout<<"Service charge: Rs. "<<service<<endl;
		cout<<"Total Bill: Rs. "<<bill<<endl;
	}
};

int main(){
	cinema c;
	cout<<"Name:Rohit kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	c.getdata();

	if(c.calculateBill()){
		c.display();
	}

	return 0;
}
