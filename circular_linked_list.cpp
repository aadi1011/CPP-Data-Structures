//Menu driven C++ program to perform operations on circular linked list
//Code by Aadith Sukumar (https://github.com/aadi1011)

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* link;
};

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
