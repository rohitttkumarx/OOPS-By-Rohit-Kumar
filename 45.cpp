
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	char ch;

	ofstream fout;
	fout.open("sample.txt");

	cout << "Enter text to write into file: ";

	while (cin.get(ch) && ch != '#')
	{
		fout.put(ch);
	}

	fout.close();

	ifstream fin;
	fin.open("sample.txt");

	cout << "\nContents of file are:\n";

	while (fin.get(ch))
	{
		cout.put(ch);
	}

	fin.close();

	return 0;
}
