#include<stdio.h>
#include<stdlib.h>
//Linked List
typedef struct Node{
    int data;
    struct Node *next;
}node;

void main(){
    node *p,*head,*q,*r;
//size of linked list
    int n,i;
    printf("Enter The No. of element you want to Enter: ");
    scanf("%d",&n);
//inserting element in linked list
    head=(node*)malloc(sizeof(node));
    printf("Enter The Value in Linked List: ");
    scanf("%d",&head->data);
    head->next=NULL;
    p=head;
    for(i=1;i<n;i++){
        p->next=(node*)malloc(sizeof(node));
        p=p->next;
        printf("\nEnter The Value in Linked List: ");
        scanf("%d",&p->data);
        p->next=NULL;
    }
    printf("\nValue Inserted");
//printing in linked list
    printf("\nThe Value In Linked List are: \n");
    p=head;
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
    }
//reversing
    p=head;
    node *prev=NULL;
    while(p!=NULL){
        r=p;
        q=p->next;
        p->next=prev;
        prev=r;
        p=q;
        head=prev;
    }
    //printing 
     printf("\nThe Value In Linked List are: \n");
    p=head;
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
}
}
