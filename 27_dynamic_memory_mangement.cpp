#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0, min, max;
	float avg;

	cout<<"Enter number of elements: ";
	cin>>n;

	int *arr = new int[n];

	cout<<"Enter "<<n<<" elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum += arr[i];
	}

	min = max = arr[0];

	for(int i=1;i<n;i++)
	{
		if(arr[i] < min)
			min = arr[i];

		if(arr[i] > max)
			max = arr[i];
	}

	avg = (float)sum / n;

	cout<<"\nElements: ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	cout<<"\nSum = "<<sum;
	cout<<"\nAverage = "<<avg;
	cout<<"\nMinimum = "<<min;
	cout<<"\nMaximum = "<<max<<endl;

	delete[] arr;

	cout<<"Memory released successfully."<<endl;

	return 0;
}