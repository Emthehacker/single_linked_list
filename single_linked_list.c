//This is an example code of creating a single linked list.
//Creating a single linked list.
//Node has data and link
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
}*head, *next;

int main()
{
    //Creating head node
    head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    (void)(head -> data);
    (*head).link = NULL;
    printf("head -> ");
    
    //creating first node
    next = NULL;
    next = (struct node *)malloc(sizeof(struct node));
    next -> data = 55;
    next -> link = NULL;
    head -> link = next;
    printf("ptr1[%d] -> ", next -> data);
    
    //Creating second node
    next = NULL;
    next = (struct node *)malloc(sizeof(struct node));
    next -> data = 75;
    next -> link = NULL;
    head -> link -> link = next;
    printf("ptr2 [%d] -> NULL", next -> data);
    return 0;
}