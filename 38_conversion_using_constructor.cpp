
#include<iostream>
using namespace std;

class Rupees{
	private:
		float rs;
	public:
		void getdata(){
			cout<<"Enter amount in rupees: ";
			cin>>rs;
		}

		float getRupees(){
			return rs;
		}
};

class Dollars{
	private:
		float dollar;
	public:
		Dollars(Rupees r){
			dollar=r.getRupees()/94.91;
		}

		void display(){
			cout<<"Amount in dollars: $"<<dollar<<endl;
		}
};

int main(){
	cout<<"Name: Rohit Kumar"<<endl;
	cout<<"URN: 2514169"<<endl;
	cout<<"CRN: 2515244"<<endl;

	Rupees r;
	r.getdata();

	Dollars d=r;

	d.display();

	return 0;
}
