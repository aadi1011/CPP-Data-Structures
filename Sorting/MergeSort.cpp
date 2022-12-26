//Merge Sort
#include<iostream>
using namespace std;


void merge(int arr[], int l, int mid, int h) 
{
	int n1 = mid - l + 1;
	int n2 = h - mid;
	int a[100];
	int b[100];
	for (int i = 0; i < n1; i++) 
	{
		a[i] = arr[l + i];
	}
	for (int i = 0; i < n2; i++) 
	{
		b[i] = arr[mid + 1 + i];
	}
	int i = 0;
	int j = 0;
	int k = l;
	
  while (i < n1 && j < n2) 
	{
		if (a[i] < b[i]) 
		{
			arr[k] = a[i];
			k++;
			i++;
		}
		else 
		{
			arr[k] = b[j];
			k++;
			j++;
		}
	}
	while (i < n1) 
	{
		arr[k] = a[i];
		k++;
		i++;
	}
	while (j < n2) 
	{
		arr[k] = b[j];
		k++;
		j++;
	}
}

// Main driver function
void main() 
{
	int arr[100]{}, n;
	cout << "Enter the size of an array: ";
	cin >> n;
	cout << "Enter the array\n";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	MergeSort(arr, 0, n - 1);
	cout << "Sorted array\n";
	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
