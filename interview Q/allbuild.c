#include<stdio.h>
#include<stdlib.h>

struct node{
             int data;
             struct node* next;
             };
             
             
void push(struct node** headref, int num)
{
     struct node* nn=malloc(sizeof(struct node));
     
     nn->data=num;
     nn->next=*headref;
     *headref=nn;
}





struct node* build_tailpush_norm(int n)
{
       struct node* head;
       struct node* tail;
       int i;
       head=NULL;
      if(n) push(&head,1);
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
       for(i=1;i<=n;i++) { push(&(tail->next),i); tail=tail->next;}
       return(head->next);
       }
       
struct node* build_tailpush_localref(int n)
{
  int i;
  struct node* head;
  struct node** lastref;
  head=NULL;
  lastref=&head;
  for(i=1;i<=n;i++) {push(lastref,i); lastref = &((*lastref)->next); }
  return(head);
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
      printf("\n");
      
      head=build_tailpush_dummy(n);
      curr=head;
      printf("Build by Push dummy\n");
      while(curr!=NULL) { printf("Data is %d\n",curr->data);curr=curr->next;}
      printf("\n");
      
      head=build_tailpush_localref(n);
      curr=head;
      printf("Build by Push local ref\n");
      while(curr!=NULL) { printf("Data is %d\n",curr->data);curr=curr->next;}
      
      getchar();
      getchar();
      }
      
       
