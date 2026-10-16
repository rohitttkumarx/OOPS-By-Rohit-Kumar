/*a) A vehicle rental company needs a small system to maintain
details of vehicles available for rent. For every vehicle, the system
should store registration number, model, rental rate and
availability status. The number of vehicles is not fixed at compile
time.
Design a class-based program that dynamically creates storage for
the required number of vehicle records using the ‘new’ operator.
Provide suitable constructors and member functions to add
records, search for a vehicle by registration number, display its
details, and calculate the rental amount for a specified number of
days.
*/


#include<iostream>
using namespace std;

class Vehicle{
	public:
	string reg,model;
	float rate;
	int available;

	Vehicle(){
		rate=0;
		available=1;
	}

	void add(){
		cout<<"Enter registration number: ";
		cin>>reg;
		cout<<"Enter model: ";
		cin>>model;
		cout<<"Enter rate per day: ";
		cin>>rate;
		cout<<"Available (1-Yes, 0-No): ";
		cin>>available;
	}

	void display(){
		cout<<"Registration: "<<reg<<endl;
		cout<<"Model: "<<model<<endl;
		cout<<"Rate: "<<rate<<endl;
		cout<<"Availability: "<<available<<endl;
	}
};

int main(){
	int n,days;
	string r;
	cout<<"Name:Rohit kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	cout<<"Enter number of vehicles: ";
	cin>>n;

	Vehicle *v=new Vehicle[n];

	for(int i=0;i<n;i++){
		v[i].add();
	}

	cout<<"Enter registration number to search: ";
	cin>>r;

	for(int i=0;i<n;i++){
		if(v[i].reg==r){
			v[i].display();

			if(v[i].available==1){
				cout<<"Enter rental days: ";
				cin>>days;
				cout<<"Total rent: "<<v[i].rate*days;
			}
			else{
				cout<<"Vehicle not available";
			}

			delete[] v;
			return 0;
		}
	}

	cout<<"Vehicle not found";

	delete[] v;
	return 0;
}