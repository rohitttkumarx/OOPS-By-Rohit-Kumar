#include<iostream>
using namespace std;
class complex{
	int img,real;
	public:
	void getdata(){
		cout<<"Enter real part: ";
		cin>>real;
		cout<<"Enter imaginary part: ";
		cin>>img;
	}
	void display(){
		cout<<real<<" + "<<img<<'i'<<endl;
	}
	complex operator+(complex c){
		complex temp;
		temp.real=real + c.real;
		temp.img=img + c.img;
		return temp;
	}
};
int main(){
	complex c1,c2,c3;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	cout<<"Enter first complex number:"<<endl;
	c1.getdata();
	cout<<"Enter second complex number:"<<endl;
	c2.getdata();
	cout<<"\nFirst Complex Number:";
	c1.display();
	cout<<"Second Complex Number:";
	c2.display();
	c3=c1+c2;
	cout<<"\nSum Of Complex:"<<endl;
	c3.display();
	return 0;

}