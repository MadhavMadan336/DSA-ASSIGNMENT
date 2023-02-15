#include<stdio.h>
#include<stdlib.h>
//Linked List
typedef struct Node{
    int data;
    struct Node *next;
}node;

void main(){
    node *p,*head,*q, *r;
    int n,i;
    printf("Enter The No. of element you want to Enter: ");
    scanf("%d",&n);
    //Inserting elements in Linked List
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
    //Printing
    printf("\nThe Value In Linked List are: \n");
    p=head;
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
    }
    //Deletion
    int pos,cursor=0;
    p=head;
    printf("\nEnter The Position you want to Delete: ");
    scanf("%d",&pos);
    while(p!=NULL){
        cursor++;
        //Deletion  at First Node
        if(pos==1){
            q=p->next;
            head=q;
            break;
        }
       //Deletion at Last 
        else if(pos==n && cursor+1==n){
            p->next=NULL;
            break;
        }
        //Deletion at Middle 
        else if(cursor+1==pos){
            r=p;
            p=p->next;
            q=p->next;
            p=r;
            p->next=q;
            break;
        }
        p=p->next;
    }
    printf("\nDeletion Complete\n");
    printf("\nThe New Linked List is :\n");
    p=head;
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
    }
}
