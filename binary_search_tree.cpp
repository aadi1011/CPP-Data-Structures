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
    //cout<<endl;
    //main();
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
    //cout<<endl;
    //main();
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
    //cout<<endl;
    //main();
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
        else    //Element found
        {
            if(temp->left==NULL && temp->right==NULL)   //End leaf node and no child
            {
                if (parent->left==temp)
                {
                    parent->left=NULL;
                }
                else
                {
                    parent->right=NULL;
                }
                free(temp);
                cout<<"Node deleted"<<endl;
                main();
            }
            else if (temp->left==NULL)          //child node present in right and left empty
            {
                if (parent->left==temp)
                {
                    parent->left=temp->right;
                }
                else if (parent->right==temp)
                {
                    parent->right=temp->right;
                }
                free(temp);
                cout<<"Node deleted"<<endl;
                main();
            }
            else if (temp->right==NULL)
            {
                if (parent->left==temp)
                {
                    parent->left=temp->left;
                }
                else if (parent->right==temp)
                {
                    parent->right=temp->left;
                }
                free(temp);
                cout<<"Node deleted"<<endl;
                main();
            }
            else
            {
                struct Node *temp2 = temp->right;
                struct Node *parent2 = temp;
                while (temp2->left!=NULL)
                {
                    parent2=temp2;
                    temp2=temp2->left;
                }
                temp->data=temp2->data;
                if (parent2->left==temp2)
                {
                    parent2->left=temp2->right;
                }
                else if (parent2->right==temp2)
                {
                    parent2->right=temp2->right;
                }
                free(temp2);
                cout<<"Node deleted"<<endl;
                main();
            }
        }
    }

}

//Sub menu for traversal
void traversal()
{
    int choice;
    cout<<"1. Inorder Traversal"<<endl;
    cout<<"2. Preorder Traversal"<<endl;
    cout<<"3. Postorder Traversal"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch (choice)
    {
        case 1:
            inorder(root);
            cout<<endl;
            main();
            break;
        case 2:
            preorder(root);
            cout<<endl;
            main();
            break;
        case 3:
            postorder(root);
            cout<<endl;
            main();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"Invalid choice"<<endl;
            main();
            break;
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