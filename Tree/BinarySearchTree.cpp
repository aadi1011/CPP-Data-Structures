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
        while (temp!=NULL)
        {
            if (data<temp->data)
            {
                if (temp->left==NULL)
                {
                    temp->left=newnode;
                    cout<<"LEFT: "<<temp->left->data<<endl<<"Address: "<<&temp->left<<endl;
                    break;
                }
                else
                {
                    temp=temp->left;
                }
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
