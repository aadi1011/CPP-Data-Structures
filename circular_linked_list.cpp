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
	struct node* temp = head->link;
	while (temp->link != head)
	{	
		temp = temp->link;
	}
	temp->link = newnode;
	newnode->link = head;
	head=newnode;

	cout<<endl;
	traverse(head);
}
	
//Insert at a position in the circular list
void pos_insert(struct node* head)
{
	int n, position;
	cout<<"Enter data of new node: ";
	cin>>n;
	cout<<"Enter position to enter: ";
	cin>>position;

	struct node* newnode = NULL;
    newnode = (struct node*)malloc(sizeof(struct node*));
	
	struct node* temp = head;
	for (int i = 1; i < position - 1; i++)
	{
		temp = temp->link;
	}
	newnode = (struct node*)malloc(sizeof(struct node*));
	newnode->data = n;
	newnode->link = NULL;
	newnode->link = temp->link;
	temp->link = newnode;
	cout<<endl;
	traverse(head);
}    

// Deleting from the beginning of the circular list
void delete_beg(struct node* head)
{
	struct node* temp = head->link;
	while (temp->link != head)
	{
		temp = temp->link;
	}
	temp->link = head->link;
	head = head->link;
	cout<<endl;
	traverse(head);
}

//Creating the menu

void menu(struct node* head)
{
    int choice;
	
	cout<<"\n\n1. Traverse the list"<<endl;
	cout<<"2. Insert at the beginning of the list"<<endl;
	cout<<"3. Insert at a position in the list"<<endl;
	cout<<"4. Delete from the beginning of the list"<<endl;
	cout<<"5. Delete from a position in the list"<<endl;
	cout<<"6. Exit"<<endl;
	cout<<"Enter choice: ";
	cin>>choice;

// ELSE IF PENDING

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
