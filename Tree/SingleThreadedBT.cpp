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
    
    //printing the output
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Function to insert in tree
void insert()
{
    int data;
    cout << "Enter data to insert: ";
    cin >> data;
    
    struct Node *temp = root;
    temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *newnode = NULL;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->thread = 0;
    // If tree is empty
    if (root == NULL)
    {
        root = temp;
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        root->thread = 0;
        cout << "ROOT: " << root->data << endl << "Address: " << &root << endl;
    }
    // If tree is not empty
    else
    {
        temp = root;
        while (temp != NULL) // traversing till end
        {
            if (data < temp->data)
            {
                if (temp->left == NULL)
                {
                    temp->left = newnode;
                    cout << "LEFT: " << temp->left->data << endl << "Address: " << &temp->left << endl;
                    break;
                }
                else
                {
                    temp = temp->left;
                }
            }
            else if (data > temp->data)
            {
                if (temp->right == NULL)
                {
                    temp->right = newnode;
                    cout << "RIGHT: " << temp->right->data << endl << "Address: " << &temp->right << endl;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
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
