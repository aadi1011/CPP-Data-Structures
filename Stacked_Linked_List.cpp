// C++ code for Linked list with stack Push, Pop, Display operation
// By Aadith Sukumar (https://github.com/aadi1011)

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* link;
};  
node*top;

//Display function
void display()
{
    struct node* temp = top;
    cout<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->link;
    }
}

// Push function
void push(int n)
{
    struct node* newnode = NULL;
    newnode = (struct node*) malloc(sizeof(struct node));
    if (!newnode)
    {
        cout<<"\nOverflow condition";
    }
    else
    {
        newnode -> data = n;
        newnode -> link = top;
        top=newnode;
    }
    display();
}

// Pop function
void pop()
{
    if(top==NULL)
    {
        cout<<"\nUnderflow condition";
    }
    else
    {
        struct node* temp = top;
        top = top->link;
        free(temp);
    }
    display();
}
