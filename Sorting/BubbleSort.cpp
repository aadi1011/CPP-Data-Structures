// C++ Program to implement Bubble Sort algorithm to sort an array of integers.
// Code by Aadith Sukumar (https://www.github.com/aadi1011)

#include <iostream>
using namespace std;

// Bubble sort function
void bubblesort(int array1[],int n)
{
	cout << "\nBubble Sorting by each pass: \n";
	for (int j = 0; j < n-1; j++)			// first outer loop
	{
		int flag = 0; //flag for optimization
		for (int k = 0; k < n-1; k++)		// inner loop
		{
			if (array1[k] > array1[k + 1])	// swaping when prev element > next element
			{
				int temp = array1[k];
				array1[k] = array1[k + 1];
				array1[k + 1] = temp;
			}
			for (int i = 0; i < n; i++)
			{
				cout << array1[i] << " "; // printing the sort pass by pass
			}
			cout << endl;
		}
		cout << endl;
	}
	
	// printing complete sorted array
	cout << "Sorted Array: ";
	for (int i = 0; i < n; i++)
	{
		cout << array1[i] << " ";
	}
}

// Main function/driver function
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
	bubblesort(array1, n); // calls bubblesort() function after forming array through user input
	return 0;
}
