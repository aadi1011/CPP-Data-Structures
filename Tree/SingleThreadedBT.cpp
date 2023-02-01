// C++ program to build a single threaded binary tree
/* Includes function to create, insert, traverse, delete tree*/
// Code by Aadith Sukumar (https://www.github.com/aadi1011)

#include <iostream>
using namespace std;

// Structure of a node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    int thread;
};
struct Node *root = NULL;

// Function for preorder traversal
void preorder(struct Node *root)
{
    if (root == NULL)
        return;
    
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

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
