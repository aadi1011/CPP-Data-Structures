// C++ Program to implement Quick Sort Algorithm
// Code by Aadith Sukumar (https://www.github.com/aadi1011

#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int low, int high)
{
	int i = low-1;
	int j = high;
	int pivot = arr[high];			//changed from low to high
	while (i <= high-1)					// Swapped Sign
	{
		while (pivot <= arr[i])		// Swapped Sign
			i--;
		if (pivot > arr[j])		// Swapped Sign
			i++;
			swap(arr[i], arr[j]);
		//if (i > j)					// Swapped Sign
		//	swap(arr[i], arr[j]);
	}
	swap(arr[high], arr[i]);		//changed from low to high
	return i;
}

void quickSort(int arr[], int low, int high, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	if (low < high)					// Swapped Sign
	{
		int pivot = partition(arr, low, high);
		quickSort(arr, low, pivot - 1, size);
		quickSort(arr, pivot + 1, high, size);
	}
}

void main()
{
	int arr[] = { 45, 4, 34, 94, 2 };
	int size = sizeof(arr) / sizeof(int);
	quickSort(arr, 0, size - 1, size);
	//cout << "After Sorting" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

