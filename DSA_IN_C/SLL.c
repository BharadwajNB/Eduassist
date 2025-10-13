#include <stdio.h>
struct node
{
    int data;
    struct node * link;
};

// print the linkded list value 
void printlinkedlist(struct node*p)
{
while (     
}
int main()
{
    struct node * head;
    struct node * one = NULL;
    struct node * two = NULL;
    struct node * three = NULL;
    struct node * four = NULL;

    // Allocate momory 
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));

    // Assign the value 
    one -> value = 1;
    two -> value = 2;
    three -> value = 3;
    four -> value = 4;

    // connect nodes
    one -> next = two;
    two -> next = three;
    three -> next = four;
    four -> next = NULL;

    //print node-value 

}