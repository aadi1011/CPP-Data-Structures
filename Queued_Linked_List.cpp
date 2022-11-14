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
