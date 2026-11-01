#include<iostream>
using namespace std;
class number{
	int x;
	public:
	void getdata(){
		cout<<"Enter a number: ";
		cin>>x;
	}
	void show(){
		cout<<"Value: "<<x<<endl;
	}
	void operator++(){
		++x;
	}
	void operator++(int){
		x++;
	}
};
int main(){
	number n;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	n.getdata();
	cout<<"\nOriginal Value:"<<endl;
	n.show();
	++n;
	cout<<"\nAfter prefix increament(++n):"<<endl;
	n.show();
	n++;
	cout<<"\nAfter postfix increament(n++):"<<endl;
	n.show();
	return 0;
}