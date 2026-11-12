
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	char data[100];

	fstream file;

	file.open("sample.txt", ios::in | ios::out | ios::trunc);

	if (!file)
	{
		cout << "File cannot be opened.";
		return 0;
	}

	file << "Hello World";

	cout << "File content written successfully.\n";

	file.seekg(0, ios::beg);

	cout << "\nReading file using get pointer: ";
	while (file.get(data[0]))
	{
		cout << data[0];
	}

	cout << "\n\nCurrent get pointer position: ";
	cout << file.tellg();

	file.clear();

	file.seekp(6, ios::beg);
	file << "C++";

	file.flush();

	file.seekg(0, ios::beg);

	cout << "\n\nUpdated file content: ";

	while (file.get(data[0]))
	{
		cout << data[0];
	}

	cout << "\n";

	file.close();

	return 0;
}
