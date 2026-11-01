
#include<iostream>
using namespace std;

class Fahrenheit{
	private:
		float temp;
	public:
		void setTemp(float t){
			temp=t;
		}

		void display(){
			cout<<"Temperature in Fahrenheit: "<<temp<<" F"<<endl;
		}
};

class Celsius{
	private:
		float temp;
	public:
		void getdata(){
			cout<<"Enter temperature in Celsius: ";
			cin>>temp;
		}

		operator Fahrenheit(){
			Fahrenheit f;
			f.setTemp((temp*9/5)+32);
			return f;
		}
};

int main(){
	cout<<"Name: Rohit Kumar"<<endl;
	cout<<"URN: 2514169"<<endl;
	cout<<"CRN: 2515244"<<endl;

	Celsius c;
	c.getdata();

	Fahrenheit f;
	f=c;

	f.display();

	return 0;
}
