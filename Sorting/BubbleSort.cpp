#include <iostream>
using namespace std;

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
