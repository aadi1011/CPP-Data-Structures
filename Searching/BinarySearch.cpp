// Menu driven Binary Search using Iteration and Recursion
#include <iostream>
using namespace std;

int binarySearchIter(int arr[], int n, int num)
{
	int low = 0, high = n - 1;
	while (low <= high){
		int mid = (low + high) / 2;
		if (num == arr[mid]){
			cout << "Value is at index: " << mid;
			break;
		}
		else if (num < arr[mid]){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	return -1;
}
