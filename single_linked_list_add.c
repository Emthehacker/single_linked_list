//Code for a single linked list that adds 
//nodes by a function
//This method is efficient to reduce the time 
//complexity of adding at a node at the end to O(1)

#include <stdio.h>
#include <stdlib.h>
void print_data();
struct node *add_at_end ();

struct node
{
    int data;
    struct node *link;
}*head;

int main()
{
    //Creating first node joined to the head 
    head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head -> data = 76;
    (*head).link = NULL;

    struct node *ptr = head;
        
    //Adding other nodes to the list.
    ptr = add_at_end(ptr, 45);
    ptr = add_at_end(ptr, 69);
    ptr = add_at_end(ptr, 36);
    ptr = add_at_end(ptr, 20);
    print_data(head);
}

struct node *add_at_end (struct node *ptr, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;
    ptr -> link = temp;
    return temp;
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
