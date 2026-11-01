#include<iostream>
using namespace std;
class cal{
	private:
	int meter,cent;
	public:
	void getdata(){
		cout<<"Enter distance in meter: ";
		cin>>meter;
		cout<<"Enter distance in centimeter: ";
		cin>>cent;
	}
	operator float(){
		float total;
		total=meter + (cent/100.0);
		return total;
	}

};
int main(){
	cal d;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	float result;
	d.getdata();
	result=d;
	cout<<"\nDistance in meter: "<<result<<endl;
	return 0;
}