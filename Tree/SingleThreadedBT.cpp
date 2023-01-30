// C++ program to build a single threaded binary tree
// Code by Aadith Sukumar (https://www.github.com/aadi1011)

#include <iostream>
using namespace std;

//Main function
int main()
{
    int choice;
    cout<<"\n\nEnter the function to perform: \n1. Preorder Traverse\n2. Insert\n3. Exit\n\nYour Choice: ";
    cin>>choice;
    if(choice==1)
    {
        preorder(root);
        main();
    }
    else if(choice==2)
    {
        insert();
        main();
    }
    else if(choice==3)
    {
        exit(0);
    }
    else
    {
        cout<<"Invalid choice";
    }
}
