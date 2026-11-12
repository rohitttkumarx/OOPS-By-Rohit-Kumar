
#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;

	try
	{
		cout << "Enter a number: ";
		cin >> a;

		if (a == 0)
			throw 0;
		else if (a == -1)
			throw -1.0;

		cout << "You entered: " << a << endl;
	}
	catch (int)
	{
		cout << "Caught an integer exception (may be divide by zero)." << endl;
	}
	catch (double)
	{
		cout << "Caught a double exception." << endl;
	}

	cout << "Program ends normally." << endl;

	return 0;
}
