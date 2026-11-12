
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*link;
};

int main(){
    struct node *head=NULL;
    head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;
    
    struct node*cur=NULL;
    cur=malloc(sizeof(struct node));
    cur->data=12;
    cur->link=NULL;
    head->link=cur;
    
    cur=malloc(sizeof(struct node));
    cur->data=13;
    cur->link=NULL;
    head->link->link=cur;
    
    //inserting an element at the End
    struct node*temp;
    temp=malloc(sizeof(struct node));
    temp->data=100;
    temp->link=NULL;
    
    int count =0;

    if(head==NULL){
        printf("The List is Empty");
    }

    struct node*ptr=NULL;
    ptr=head;

    // Connect new node
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }

    ptr->link=temp;

    // Print and count
    ptr=head;

    while(ptr!=NULL){
        printf("%d->",ptr->data);
        count++;
        ptr=ptr->link;
    }

    printf("NULL");
    printf("\ntotal no of nodes: %d",count);

    return 0;
}
