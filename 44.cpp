
#include <iostream>
using namespace std;


int main()
{
	double num;

	cout << "Name: Rohit Kumar" << endl;
	cout << "URN: 2514169" << endl;
	cout << "CRN: 2515244" << endl;

	cout << "\nEnter a number: ";

	try
	{
		if (!(cin >> num))
		{
			throw 'A';
		}
		else if (num < 0)
		{
			throw -1;
		}
		else if (num != (int)num)
		{
			throw 3.14;
		}
		else
		{
			cout << "\nValid input! Positive integer entered: " << num;
		}
	}
	catch (...)
	{
		cout << "\nException caught! ";

		if (cin.fail())
		{
			cout << "Character input is not allowed.";
		}
		else if (num < 0)
		{
			cout << "Negative number is not allowed.";
		}
		else
		{
			cout << "Decimal number is not allowed.";
		}
	}

	cout << "\n\nProgram continues after exception handling.";

	return 0;
}
