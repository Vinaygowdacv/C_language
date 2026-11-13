#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*link;
};
int main(){
    struct node*head=NULL;
    head = malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    
    struct node*cur=NULL;
    cur=malloc(sizeof(struct node));
    cur->data=20;
    cur->link=NULL;
     head->link=cur;
   
    
    cur=malloc(sizeof(struct node));
    cur->data=100;
    cur->link=NULL;
    head->link->link=cur;
    cur=head;
    
     struct node*cur1=NULL;
    cur1=malloc(sizeof(struct node));
    cur1->data=111;
    cur1->link=NULL;
    
    int a=2;
    
    while(a!=1){
        cur=cur->link;
        a--;
        }
        cur1->link=cur->link;
        cur->link=cur1;
        cur=head;
        while(cur!=NULL){
            printf("%d->",cur->data);
            cur=cur->link;
            
            
        }
        free(cur1);
        printf("NULL");
    
   
    
    
}  
insertfront


#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*link;
};
int main(){
    struct node*head=NULL;
    head = malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    
    struct node*ptr=NULL;
    ptr=malloc(sizeof(struct node));
    ptr->data=20;
    ptr->link=NULL;
    
    ptr->link=head;
    head=ptr;
    
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->link;
        
    }
    printf(NULL");
    
    
    
    
}
    
    
    
    
    
    
    
