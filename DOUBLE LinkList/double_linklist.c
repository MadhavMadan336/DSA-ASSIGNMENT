#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
int main()
{
    struct Node *head,*one,*two,*three;


    one=NULL;
    two=NULL;
    three=NULL;


    one=(struct Node *)malloc(sizeof(struct Node));
    two=(struct Node *)malloc(sizeof(struct Node));
    three=(struct Node *)malloc(sizeof(struct Node));

    one->data=5;
    two->data=6;
    three->data=9;

    one->prev=NULL;
    one->next=two;
    two->prev=one;
    two->next=three;
    three->prev=two;
    three->next=NULL;
    
    printf("the double link list entered successfully:::\n");

    head=one;
    //printing
    while(head!=NULL){
        printf("\t%d",head->data);
        head=head->next;
    }
return 0;
}
