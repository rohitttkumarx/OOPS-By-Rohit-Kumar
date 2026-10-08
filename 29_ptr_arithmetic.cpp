#include<iostream>
using namespace std;

int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	int *ptr = arr;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;

	cout<<"Pointer Arithmetic Example\n";
	cout<<"--------------------------\n";

	cout<<"Address stored in ptr: "<<ptr<<" Value: "<<*ptr<<endl;

	ptr++;
	cout<<"After ptr++ -> Address: "<<ptr<<" Value: "<<*ptr<<endl;

	ptr = ptr + 2;
	cout<<"After ptr + 2 -> Address: "<<ptr<<" Value: "<<*ptr<<endl;

	ptr--;
	cout<<"After ptr-- -> Address: "<<ptr<<" Value: "<<*ptr<<endl;

	return 0;
}