
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	char data[100];

	ofstream fout;
	fout.open("sample.txt", ios::binary);

	cout << "Enter text to write into file: ";
	cin.getline(data, 100);

	fout.write(data, strlen(data));

	fout.close();

	ifstream fin;
	fin.open("sample.txt", ios::binary);

	cout << "\nContents of file are:\n";

	fin.read(data, 100);

	int n = fin.gcount();
	data[n] = '\0';

	cout << data;

	fin.close();

	return 0;
}
