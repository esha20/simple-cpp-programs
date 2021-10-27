#include<iostream>
using namespace std;

int find(int arr[], int n, int k)
{
	//k is the number to be found
	for (int i=0;i<n;i++)
	{
		if (arr[i]==k)
		{
			cout<< i <<" is the index of the element.";
		return 0;
	}
	}
	cout<<"Not found.";
}
int main()
{
	int n,k;
	cout<< "Enter the size of array";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array.";
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element to search for.";
	cin>>k;
	find(arr,n,k);
	return 0;
}
