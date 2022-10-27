//Menu driven C++ program to perform operations on circular linked list
//Code by Aadith Sukumar (https://github.com/aadi1011)

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* link;
};

//Traverse the list
void traverse(struct node* head)
{
    struct node* temp = head->link;
    cout << endl;
    cout<<head->data<<" -> ";   //Base head printing
    while (temp != head)
    {
        cout << temp->data << " -> ";
        temp = temp->link;
	}
}

//Insert at the beginning of the circular list
void insert_beg(struct node* head)
{
    int n;
    cout<<"Enter data of new node: ";
    cin>>n;
    
	struct node* newnode = NULL;
    newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data = n;
    


//Main function
int main()
{
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 100;
    head->link = second;
    second->data=200;
    second->link=third;
    third->data=300;
    third->link=head;
    cout<<endl;
    menu(head);
    return 0;
}
