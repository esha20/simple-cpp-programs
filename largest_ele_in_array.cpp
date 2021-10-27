#include <iostream>
using namespace std;

double find_max (int arr[], int n)
{
	double max=arr[0];
	for (int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int main()
{
	int n;
	cout<< "Enter the size of array";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array.";
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The maximum element is : "<<find_max(arr,n);
	return 0;
}
