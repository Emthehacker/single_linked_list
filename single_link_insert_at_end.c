// Code for inserting a node at the end of a single linked list
//The code adds 18 at the end of the list
#include <stdio.h>
#include <stdlib.h>
void print_data();
void add_at_end ();

struct node
{
    int data;
    struct node *link;
}*head, *next;

int main()
{
    //Creating first node which is the head node
    head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    (void)(head -> data);
    (*head).link = NULL;
        
    //creating second node
    next = NULL;
    next = (struct node *)malloc(sizeof(struct node));
    next -> data = 55;
    next -> link = NULL;
    head -> link = next; //joining to the next node
        
    //Creating third node
    next = NULL;
    next = (struct node *)malloc(sizeof(struct node));
    next -> data = 75;
    next -> link = NULL;
    head -> link -> link = next; //joining to the next node
    add_at_end (head, 18);
    print_data(head);
    return 0;
}

void add_at_end (struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr =  head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;

    while (ptr -> link != NULL)
    {
        ptr = ptr -> link;
    }
    ptr -> link = temp;
}

void print_data(struct node *pointer)
{
    int count = 0;
    if (head == NULL)
        printf("Linded list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }
}