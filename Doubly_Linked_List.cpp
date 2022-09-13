//Menu driven C++ Program to perform operations on a doubly linked list
//Code by Aadith Sukumar (https://github.com/aadi1011)

#include<iostream>
using namespace std;

// Definining structure for node
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};



// Main function
int main()
{
    struct node *head=NULL;
    struct node *second=NULL;
    struct node *third=NULL;

    // Allocating memory for nodes
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    // Assigning values to nodes
    head->prev=NULL;
    head->data=45;
    head->next=second;
    second->prev=head;
    second->data=80;
    second->next=third;
    third->prev=second;
    third->data=95;
    third->next=NULL;
    
    menu(head); 
    return 0;
}

