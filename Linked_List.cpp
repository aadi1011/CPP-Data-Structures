//Menu driven C++ Program to perform operations on a linked list
//Code by Aadith Sukumar (https://github.com/aadi1011)

#include <iostream>
using namespace std;

// Creating structure for node declaration
struct node
{
	int data;
	struct node* link;
};

// Traverse the list
void traverse(struct node* head)
{
	struct node* temp = head;
	cout << endl;
	while (temp != NULL)
	{
		//cout << "\nAddress: " << temp << endl;
		//cout << "Value: " << temp->data << endl << endl;
		cout << temp->data << " -> ";
		temp = temp->link;
	}
}

// Insert at the beginning of the list
struct node* insert_beg(struct node* head)
{
    int n;
    cout << "Enter data of new node: ";
    cin >> n;
    struct node* newnode = NULL;
    newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data = n;
    newnode->link = NULL;
    newnode->link = head;
    head=newnode;
    return head;
}

// Insert at a position in the list
void pos_insert(struct node* head)
{
	int n, position;
	cout << "Enter data of new node: ";
	cin >> n;
	cout << "Enter position to enter: ";
	cin >> position;
	struct node* temp = head;
	struct node* newnode = NULL;
	for (int i = 1; i < position - 1; i++)
	{
		temp = temp->link;
	}	
	newnode = (struct node*)malloc(sizeof(struct node*));
	newnode->data = n;
	newnode->link = NULL;
	newnode->link = temp->link;
	temp->link = newnode;
}

// Insert at the end of the list
void insert_end(struct node* head)
{
    int n;
    cout << "Enter data of new node: ";
    cin >> n;
    struct node* newnode = NULL;
    newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data = n;
    newnode->link = NULL;
    struct node* temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = newnode;
}

//Delete from the beginning of the list
struct node* delete_beg(struct node* head)
{
	struct node* temp = head;
	head = head->link;
	free(temp);
	return head;
}

//Delete from end of the list
void delete_end(struct node* head)
{
	struct node* temp = head;
	while (temp->link->link != NULL)
	{
		temp = temp->link;
	}
	temp->link = NULL;
	free(temp->link);
}

//main function
int main()
{
	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third = NULL;
	
	head = (struct node*) malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	
	head->data = 45;
	head->link = second;
	second->data = 98;
	second->link = third;
	third->data = 31;
	third->link = NULL;
	menu(head);
}
