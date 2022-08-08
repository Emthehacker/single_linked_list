#include <stdio.h>
#include <stdlib.h>
void print_data();
struct node *add_at_end ();
struct node *att_at_pos();


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
    ptr = att_at_pos(&head, 89, 1);

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

struct node* att_at_pos(struct node **head, int data, int position)
{
    struct node *ptr1 = (struct node *)malloc(sizeof(struct node));
    ptr1 -> data = data;
    //ptr1 -> link = NULL;

    struct node *ptr = *head;
    int count = 1;
    while(count < position)
    {
        ptr = ptr -> link;
        count++;
    }
    
    ptr1 -> link = ptr -> link;
    ptr -> link = ptr1;
    return ptr1;
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
