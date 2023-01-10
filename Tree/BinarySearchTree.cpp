// C++ program to build a binary search tree
// Code by Aadith Sukumar (https://github.com/aadi1011)

#include <iostream>
using namespace std;
int main();

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *root = NULL;



//Main function
int main()
{
    int choice;
    cout<<"Enter the function to perform: \n1. Traverse\n2. Insert\n3. Delete\n4. Search\n5. Exit\nYour Choice: ";
    cin>>choice;
    if(choice==1)
    {
        traversal();
    }
    else if(choice==2)
    {
        insert();
    }
    else if(choice==3)
    {
        deleteNode();
    }
    else if(choice==4)
    {
        search();
    }  
    else if(choice==5)
    {
        exit(0);
    }
    else
    {
        cout<<"Invalid choice";
    }
}
