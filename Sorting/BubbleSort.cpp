#include <iostream>
using namespace std;

void bubblesort(int array1[],int n) {
	cout << "\nBubble Sorting by each pass: \n";
	for (int j = 0; j < n-1; j++)
	{
		int flag = 0;		//flag for optimization
		for (int k = 0; k < n-1; k++)
		{
			if (array1[k] > array1[k + 1]) 
			{
				int temp = array1[k];
				array1[k] = array1[k + 1];
				array1[k + 1] = temp;
			}
			for (int i = 0; i < n; i++)
			{
				cout << array1[i] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	cout << "Sorted Array: ";
	for (int i = 0; i < n; i++)
	{
		cout << array1[i] << " ";
	}
}
int main() 
{
	int array1[100]{}, n;
	cout << "Enter the size of an array: ";
	cin >> n;
	cout << "Enter the array\n";
	for (int i = 0; i < n; i++)
	{
		cin >> array1[i];
	}
	bubblesort(array1, n);
	return 0;
}
