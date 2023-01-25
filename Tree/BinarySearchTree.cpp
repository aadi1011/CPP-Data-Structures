// C++ program to build a binary search tree
// Code by Aadith Sukumar (https://github.com/aadi1011)

#include <iostream>
using namespace std;
int main();

// base structure code for the nodes
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *root = NULL;

//Function to insert in tree
void insert()
{
    int data;
    cout<<"Enter data to insert: ";
    cin>>data;
    
    struct Node* temp = root;
    temp=(struct Node*)malloc(sizeof(struct Node));
    struct Node *newnode=NULL;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    
    //If tree is empty
    if (root==NULL)
    {
        root=temp;
        root->data=data;
        root->left=NULL;
        root->right=NULL;
        cout<<"ROOT: "<<root->data<<endl<<"Address: "<<&root<<endl;
    }
    else
    {
        temp=root;
        while (temp!=NULL)  // traversing the tree till NULL (end) values are reached.
        {
            if (data<temp->data)    // if data is lesser than element on left... 
            {
                if (temp->left==NULL)   // ...and if the left node is unoccupied
                {
                    temp->left=newnode; // place new node 'data' in left child of the temp class
                    cout<<"LEFT: "<<temp->left->data<<endl<<"Address: "<<&temp->left<<endl;
                    break;
                }
                else                    // ...and if the right node is unoccupied
                {
                    temp=temp->left;    // place new node 'data' in right child of the temp class
                }
            }
            else if (data>temp->data)
            {
                if (temp->right==NULL)
                {
                    temp->right=newnode;
                    cout<<"RIGHT: "<<temp->right->data<<endl<<"Address: "<<&temp->right<<endl;
                    break;
                }
                else
                {
                    temp=temp->right;
                }
            }
            else
            {
                cout<<"Duplicate data"<<endl;
                break;
            }
        }
    }
    main();
}

//Function for inorder traversal of tree
void inorder(struct Node *root)
{
    if (root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" -> ";
    inorder(root->right);
}

//Function for preorder traversal of tree
void preorder(struct Node *root)
{
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<" -> ";
    preorder(root->left);
    preorder(root->right);
}

//Function for postorder traversal of tree
void postorder(struct Node *root)
{
    if (root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" -> ";
}

//Function for breadth first traversal of tree with queue
void breadth_first(struct Node *root)
{
    struct Node *temp = root;
    struct Node *queue[100];
    int front = -1;
    int rear = -1;
    if (temp==NULL)
    {
        cout<<"Tree is empty"<<endl;
    }
    else
    {
        queue[++rear]=temp;
        while (front!=rear)
        {
            temp=queue[++front];
            cout<<temp->data<<" -> ";
            if (temp->left!=NULL)
            {
                queue[++rear]=temp->left;
            }
            if (temp->right!=NULL)
            {
                queue[++rear]=temp->right;
            }
        }
    }
}

/*When deleting a node, split tree in two from root, 
go to left half of tree and replace root with right most element. 
Else take right half of tree and replace root with left most element. */

// Search if an element is present in tree
void search()
{
    int data;
    cout<<"Enter data to search: ";
    cin>>data;
    struct Node *temp = root;
    while (temp!=NULL)
    {
        if (data<temp->data)
        {
            temp=temp->left;
        }
        else if (data>temp->data)
        {
            temp=temp->right;
        }
        else
        {
            cout<<"Element found"<<endl;
            main();
        }
    }
    cout<<"Element not found"<<endl;
    main();
}   


//Function to delete a node
void deleteNode()
{
    cout<<"Enter data to delete: ";
    int data;
    cin>>data;
    struct Node *temp = root;
    struct Node *parent = NULL;
    while (temp!=NULL)
    {
        if (data<temp->data)
        {
            temp=temp->left;
        }
        else if (data>temp->data)
        {
            temp=temp->right;
        }




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
