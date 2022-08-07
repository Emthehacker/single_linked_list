#include <stdio.h>
#include <stdlib.h>
struct node* add_beg();
void add_at_beg();


struct node 
{
    int data;
    struct node *link; 

}*head, *ptr;

void print_data(struct node *);
int main()
{
    head = (struct node *)malloc(sizeof(struct node));
    head -> data = 18;
    head -> link = NULL;

    ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = 25;
    ptr -> link = NULL;

    head -> link = ptr;

    head = add_beg(head, 98);
    add_at_beg(&head, 67);
    print_data(head);



}
//This piece of code adds the node at the beginning but does not change 
//the content of the head in the main function
//As a result head has to be returned to the main function
//Return value of head must be assigned to the variable head to change
//the content of the head pointer in the main function.
struct node* add_beg(struct node* head, int data)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr -> data = data;
	ptr -> link = head;
	head = ptr;
	return head;
}

//This piece of code add the node at the beginning but it modifies the 
//Address of the head pointer instead.
//The double pointer is used because head is a pointer
void add_at_beg(struct node **head, int data)
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr -> data = data;
	ptr -> link = *head;
	*head = ptr;
}



void print_data(struct node *pointer)
{
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