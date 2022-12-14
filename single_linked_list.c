//This is an example code of creating a single linked list.
//Creating a single linked list.
//Node has data and link
#include <stdio.h>
#include <stdlib.h>
void count_of_nodes();
void print_data();
struct node
{
    int data;
    struct node *link;
}*head, *next;

int main()
{
    int i = 0;
    //Creating first node attached to the head node
    head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head -> data = 25;
    (*head).link = NULL;
    printf("head -> ");
    printf("ptr%d[%d] -> ", ++i, head ->data);

    
    //creating second node
    next = NULL;
    next = (struct node *)malloc(sizeof(struct node));
    next -> data = 55;
    next -> link = NULL;
    head -> link = next; //joining to the next node
    printf("ptr%d[%d] -> ", ++i, next -> data);
    
    //Creating third node
    next = NULL;
    next = (struct node *)malloc(sizeof(struct node));
    next -> data = 75;
    next -> link = NULL;
    head -> link -> link = next; //joining to the next node
    printf("ptr%d[%d] -> ", ++i, next -> data);
    printf("NULL\n");
    count_of_nodes(head);
    print_data(head);

    return 0;
}
//code for counting the number of nodes
void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;

    while(ptr != NULL)
    {
        count++;
        ptr = ptr -> link;
    }
    printf("\nthe number of nodes is %d\n\n ", count);
}
//code for printing the data of each node
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