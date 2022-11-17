// Link list with queue
// Push, Pop, Display operation

#include <iostream>
using namespace std;
int main();

struct node
{
    int data;
    struct node* link;
};  
struct node *top = (struct node*) malloc(sizeof(struct node));

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
    main();
}

//Push function at the end
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
        newnode -> link = NULL;
        struct node* temp = top;
        while(temp != NULL)
        {
            temp=temp->link;
        }
        temp->data=n;
        temp->link=newnode;
    }
    display();
}

// Delete at the beginning of the list
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

//main function
int main()
{
    cout<<"\n1. Push";
    cout<<"\n2. Pop";
    cout<<"\n3. Display";
    cout<<"\n4. Exit";
    int choice;
    cout<<"\nChoose option: ";
    cin>>choice;
    if(choice==1)
    {
        int n;
        cout<<"\nEnter data: ";
        cin>>n;
        push(n);
    }
    else if(choice==2)
    {
        pop();
    }
    else if(choice==3)
    {
        display();
    }
    else if(choice==4)
    {
        return 0;
    }
    else
    {
        cout<<"\nInvalid choice";
    }
}
