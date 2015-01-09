#include<stdio.h>

using namespace std;

struct node{
             int data;
             struct node* next;
             };

struct node* build()
{
       struct node* head;
       struct node* sec;
       struct node* th;
       
       head = malloc(sizeof(struct node));
        sec = malloc(sizeof(struct node));
        th = malloc(sizeof(struct node));
        
        head->data=1;
        head->next=sec;
        
        sec->data=2;
        sec->next=th;
        
        th->data=3;
        th->next=NULL;
        
        return(head);
        }

main()
{
      struct node* head;
      head = build();
      int i=1;
      while(head!=NULL)
      {
         printf("Data%d is %d\n",i,head->data);
         i++; 
         head = head->next;
         }
      
      
      scanf("%d",&i);
}
        
       
