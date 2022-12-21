// Insertion Sort

#include <iostream>
using namespace std;


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
