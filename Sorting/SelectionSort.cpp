// C++ Program to implement Selection Sort algorithm to sort an array of integers.
// Code by Aadith Sukumar (https://www.github.com/aadi1011)

#include <iostream>  
using namespace std;

void selection(int arr[], int n)
{
    cout << "Sorting of each pass:\n";
    for (int i = 0; i < n - 1; i++)
    {
        int min = i; 
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void main()
{
    int arr[100]{}, n;
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    selection(arr, n);
}
