// C++ Program to implement Insertion Sort to sort an array of integers
// Code by Aadith Sukumar (https://www.github.com/aadi1011)

#include <iostream>
using namespace std;

void sort(int arr[],int n)
{
    cout << "Sorting by each pass: " << endl;
    for (int i = 1; i < n; i++){
        while (i > 0){
            if (arr[i - 1] > arr[i]){
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
            else{
                break;
            }
            i--;
        }
        for (int j = 0; j < n; j++){    //to show each pass
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    cout << "\nSorted Array: \n";
    for (int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
}

void main()
{
    int arr[100]{}, n;
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, n);
}
