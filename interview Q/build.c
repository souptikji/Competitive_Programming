#include<stdio.h>
#include<stdlib.h>

struct node{
             int data;
             struct node* next;
             };

struct node* build()
{
       struct node* head;
       struct node* sec;
       struct node* th;
       struct node* fo;
       
       head = malloc(sizeof(struct node));
        sec = malloc(sizeof(struct node));
        th = malloc(sizeof(struct node));
        fo = malloc(sizeof(struct node));
        
        head->data=1;
        head->next=sec;
        
        sec->data=2;
        sec->next=th;
        
        th->data=3;
        th->next=fo;
        
        fo->data=4;
        fo->next=NULL;
        
        return(head);
        }

int len(struct node* a)
{
    struct node* head;
    head=a;
    int cnt=0;
    while(head!=NULL)
    {
       head=head->next;
       cnt++;
       }
return cnt;
}


main()
{
      struct node* head;
      head = build();
      int i=1;
       printf("The length of list is %d\n",len(head));
      while(head!=NULL)
      {
         printf("Data%d is %d\n",i,head->data);
         i++; 
         head = head->next;
         }
      
     
      
      
      scanf("%d",&i);
}
        
       
