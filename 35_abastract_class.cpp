#include<iostream>
using namespace std;
class shape{
	public:
	 virtual void area()=0;
};
class rectangle:public shape{
	public:
	void area(){
		float len,br;
		cout<<"Enter the length of rectangle: ";
		cin>>len;
		cout<<"Enter the breadth of recatangle: ";
		cin>>br;
		cout<<"Area of Rectangle: "<<len*br<<endl;
	}
};
class circle:public shape{
	public:
	float rad;
	void area(){
		cout<<"Enter the lenght of circle: ";
		cin>>rad;
		cout<<"Area of circle: "<<3.14*rad*rad<<endl;
	}
};
int main(){
	rectangle r;
	circle c;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	r.area();
	c.area();
	return 0;
}