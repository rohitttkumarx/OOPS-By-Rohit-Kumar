
#include <iostream>
using namespace std;

void divide(int a,int b)
{
	if (b== 0)
	{
		throw b;
	}
	else{
		cout<<"Result: "<<a/b<<endl;
	}
}

int main()
{
	double x, y;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	cout << "Enter two numbers: ";
	cin >> x >> y;

	try
	{
		divide(x,y);
	}
	catch (double x)
	{
		cout << "Exception caught: Division by zero is not allowed." << endl;
	}

	cout << "Program continues after exception handling.";

	return 0;
}
