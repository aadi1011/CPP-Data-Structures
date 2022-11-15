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
