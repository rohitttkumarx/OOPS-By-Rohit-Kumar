
#include <iostream>
using namespace std;

int main()
{
	double a, b;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;

	cout << "Enter two numbers: ";
	cin >> a >> b;

	try
	{
		if (b == 0)
		{
			throw b;
		}

		cout << "Division = " << a / b << endl;
	}
	catch (double x)
	{
		cout << "Exception caught: Division by zero is not allowed." << endl;
	}

	cout << "Program continues after exception handling." << endl;

	return 0;
}
