
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	cout << "Enter a number: ";
	cin >> num;

	try
	{
		try
		{
			if (num < 0)
			{
				throw num;
			}

			cout << "Number is positive." << endl;
		}
		catch (int x)
		{
			cout << "Exception caught in inner catch block." << endl;
			throw;
		}
	}
	catch (int x)
	{
		cout << "Exception rethrown and caught in outer catch block." << endl;
		cout << "Negative number: " << x << endl;
	}

	cout << "Program continues after exception handling.";

	return 0;
}
