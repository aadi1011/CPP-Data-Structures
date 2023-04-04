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

int BinarySearchRecur(int arr[], int num, int start, int end)
{
	int mid;
	if (start > end) {
		cout << "Number is not found";
		return 0;
	}
	else {
		mid = (start + end) / 2;
		if (arr[mid] == num) {
			cout << "Number is found at " << mid << " index \n";
			return 0;
		}
		else if (num > arr[mid]) {
			BinarySearchRecur(arr, num, mid + 1, end);
		}
