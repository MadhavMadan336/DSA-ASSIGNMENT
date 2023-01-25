//2) Creation of Linked list by enetring the element 10,9,8,7,6.
#include <stdio.h>
#include <stdlib.h>
struct node   
{
  int data ;
  struct node *next;
};

void printlist(struct node * a)
{
    while(a!=0)
    {
        printf("%d \n",a->data);
        a= a -> next;
    }
}

int main ()
{
    struct node *head=NULL;
    struct node *second=NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    struct node *fifth = NULL;
    head = (struct node *)malloc (sizeof(struct node));
    second = (struct node *)malloc (sizeof(struct node));
    third = (struct node *)malloc (sizeof(struct node));
    fourth = (struct node *)malloc (sizeof(struct node));
    fifth = (struct node *)malloc (sizeof(struct node));
    
   
    head->data = 10; 

	head->next = second; 


	second->data = 9; 

	second->next = third;



	third->data = 8; 

	third->next = fourth;
	
	fourth -> data = 7 ;
	fourth -> next = fifth ;
	
	fifth -> data = 6 ; 
	fifth -> next = NULL;
	

	printlist(head);


    
return 0;
}
