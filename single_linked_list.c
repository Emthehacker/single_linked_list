//This is an example code of creating a single linked list.
//Creating a single linked list.
//Node has data and link
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
}*head, *ptr1;

int main()
{
    head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    (*head).data = 45;
    (*head).link = NULL;
    printf("%d\n", head -> data);

    ptr1 = NULL;
    ptr1 = (struct node *)malloc(sizeof(struct node));
    ptr1 -> data = 45;
    ptr1 -> link = NULL;
    head -> link = ptr1;
    printf("%d", ptr1 -> data);
    return 0;
}