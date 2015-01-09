#include<stdio.h>
#include<stdlib.h>

struct node{
            int data;
            struct node* next;
            };
            
void push_head(struct node** headref,int data)
{
     struct node* newnode;
     newnode=malloc(sizeof(struct node));
     newnode->data=data;
     newnode->next=*headref;
     *headref=newnode;
     
}
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
        
        
void push_tail(struct node* head,int n)
{
     struct node* curr=head;
     if(curr!=NULL)
     while(curr->next!=NULL) curr=curr->next;
     struct node* newnode = malloc(sizeof(struct node));
     newnode->data=n; newnode->next=NULL;
     curr->next=newnode;
     }

int len(struct node* head)
{
    struct node* it=head;
    int cnt=0;
    while(it!=NULL)
    {
       it=it->next;
       cnt++;
       }
    return cnt;
}

struct node* build_tail(int n)
{
  struct node* head=NULL;
  int i;
  push_head(&head,1);
  for(i=1;i<n;i++) push_tail(head,i);
  return(head);
}

void build_test()
{
     int n;   
     printf("Kitna lamba ");
     scanf("%d",&n); getchar();
     struct node* head = build_tail(n);
     struct node* curr=head;
     while(curr!=NULL){
                       printf("Data is %d\n",curr->data);
                       curr=curr->next;
                       }
     printf("Length of the list is %d\n",len(head));
     printf("Thank You\n");
}

void push_test()
{
    int num;
     struct node* head= build();
     printf("\nEnter element ");
     scanf("%d",&num);
     getchar();
     push_tail(head,num);
     struct node* curr=head;
     while(curr!=NULL){
                       printf("Data is %d\n",curr->data);
                       curr=curr->next;
                       }
     printf("Length of the list is %d\n",len(head));
     printf("Thank You\n");

}
main()
{
      char ch='y';
      while(ch=='y')
     {
      //build_test
      int n;   
     printf("Kitna lamba ");
     scanf("%d",&n); getchar();
     struct node* head = build_tail(n);
     struct node* curr=head;
     while(curr!=NULL){
                       printf("Data is %d\n",curr->data);
                       curr=curr->next;
                       }
     printf("Length of the list is %d\n",len(head));
     printf("Thank You\n");
      //buildtest

      printf("Continue again? ");
      scanf("%c",&ch);
      }
      scanf("%c",&ch);
} 
      
