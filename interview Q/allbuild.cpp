#include<stdio.h>
#include<stdlib.h>

struct node{
             int data;
             struct node* next;
             };
             
             
//void push(struct node** headref, int num)
//{
//     struct node* nn=malloc(sizeof(struct node));
//     
//     nn->data=num;
//     nn->next=*headref;
//     *headref=nn;
//}

void push1(struct node** headref,int data)
{
     struct node* newnode;
     newnode=malloc(sizeof(struct node));
     newnode->data=data;
     newnode->next=*headref;
     *headref=newnode;
     
}


struct node* build_tailpush_norm(int n)
{
       struct node* head;
       struct node* tail;
       int i;
       head=NULL;
       push1(&head,1);
       tail=head;
       for(i=2;i<=n;i++) { push(&(tail->next),i); tail=tail->next;}
       return(head);
}

struct node* build_tailpush_dummy(int n)
{
       struct node dummy;
       int i;
       dummy.next=NULL;
       struct node* head;
       struct node* tail;
       head=&dummy;
       tail=head;
       for(i=1;i<=n;i++) { push1(&(tail->next),i); tail=tail->next;}
       return(head->next);
       }
       
main()
{
      int n;
      scanf("%d",&n);
      struct node* head;
      struct node* curr;
      head = build_tailpush_norm(n);
      curr=head;
      printf("Build by Push normal\n");
      while(curr!=NULL) { printf("Data is %d\n",curr->data);curr=curr->next;}
      
      head=build_tailpush_dummy(n);
      curr=head;
      printf("Build by Push dummy\n");
      while(curr!=NULL) { printf("Data is %d\n",curr->data);curr=curr->next;}
      
      getchar();
      getchar();
      }
      
       
