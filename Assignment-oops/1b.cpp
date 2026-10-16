/*b) A surveying application represents two measurements using
different units. Class Distance1 stores a measurement in
kilometres and metres, whereas class Distance2 stores a
measurement in miles and yards. Design a C++ program that
combines one object of each class and displays the equivalent
total measurement in kilometres and metres. Implement the
operation through a friend function and ensure the required unit
conversions are handled correctly.*/



#include<iostream>
using namespace std;

class Distance2;

class Distance1{
	public:
	int km,m;
	friend void add(Distance1,Distance2);
};

class Distance2{
	public:
	int miles,yards;
	friend void add(Distance1,Distance2);
};

void add(Distance1 d1,Distance2 d2){
	double total;
	int km,m;

	total=d1.km+d1.m/1000.0;
	total+=d2.miles*1.609344;
	total+=d2.yards*0.0009144;

	km=(int)total;
	m=(int)((total-km)*1000+0.5);

	if(m>=1000){
		km++;
		m-=1000;
	}

	cout<<"Total distance = "<<km<<" km "<<m<<" metres";
}

int main(){
	Distance1 d1;
	Distance2 d2;
	cout<<"Name:Rohit kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;

	cout<<"Enter kilometres and metres: ";
	cin>>d1.km>>d1.m;

	cout<<"Enter miles and yards: ";
	cin>>d2.miles>>d2.yards;

	add(d1,d2);

	return 0;
}