// C++ Code to implement simple linear search
// Code by Aadith Sukumar (https://www.github.com/aadi1011)

#include<iostream>
using namespace std;

void LinearSearch(int arr[100], int total)
{
    int key,check=0;
    cout<<"Enter element to search: ";
    cin>>key;

    for(int i = 0; i<total; i++)
    {
        if (arr[i]==key)
        {
           cout<<"Element exists!\n";
           check=1;
           break;
        }
    }
    if (check==0)
    {
        cout<<"Element does not exist!\n";
    }
}

int main()
{
    int arr[100]{},total,key;
    cout<<"Enter size of array: ";
    cin>>total;
    cout<<"Enter the array:\n";
    for (int i = 0; i < total; i++)
    {
        cin>>arr[i];
    }
    LinearSearch(arr,total);
    return 0;
}
