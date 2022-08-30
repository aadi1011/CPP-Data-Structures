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
