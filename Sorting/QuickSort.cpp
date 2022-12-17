//QUICK SORT

#include <iostream>
using namespace std;
int partition(int arr[], int low, int high)
{
	int i = low;
	int j = high;
	int pivot = arr[low];
	while (i < j){
		while (pivot >= arr[i])
			i++;
		while (pivot < arr[j])
			j--;
		if (i < j){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	int temp = arr[low];
	arr[low] = arr[j];
	arr[j] = temp;
	
	return j;
}

void quickSort(int arr[], int low, int high)
{
	int n=4;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout<<endl;
	if (low < high)
	{
		int pivot = partition(arr, low, high);
		quickSort(arr, low, pivot - 1);
		quickSort(arr, pivot + 1, high);
	}
}

int main()
{
	int arr[100]{}, n;
	cout << "Enter the size of an array: ";
	cin >> n;
	cout << "Enter the array\n";
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	quickSort(arr, 0, n - 1);
	cout << "Sorted Array:\n";
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
