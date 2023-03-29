#include<iostream>
using namespace std;
int main()
{
    int arr[100]{}, total, i, num, arrTemp[50]{}, j = 0, chk = 0;
    cout << "Enter the Size for Array: ";
    cin >> total;
    cout << "Enter " << total << " Elements: " << endl;
    for (i = 0; i < total; i++) 
    {
        cin >> arr[i];
    }
    cout << "\nEnter the Number to Search: ";
    cin >> num;
    for (i = 0; i < total; i++)
    {
        if (arr[i] == num)
        {
            arrTemp[j] = i;
            j++;
            chk++;
        }
    }
