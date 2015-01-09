#include<stdio.h>
#include<stdlib.h>

struct node{
            int data;
            struct node* next;
            };
            

void wrong_push_head(int n,struct node* head)
{
     struct node* new;
     new=malloc(sizeof(struct node));
     new->data=n;
     new->next=head;
     head=new;
     
}



void push_head(struct node** headref,int data)
{
     struct node* newnode;
     newnode=malloc(sizeof(struct node));
     newnode->data=data;
     newnode->next=*headref;
     *headref=newnode;
     
}

struct node* build_by_push(int n)
{
     struct node* head; int i;
     head=NULL;
     for(i=1;i<=n;i++) push_head(&head,i);
     return (head);
     } 

           
struct node* build(int n)
{
       if(n==0) {struct node* ff; ff=NULL; return ff;}
       struct node* ptr[n];
       
       int i;
       for(i=0;i<=n-1;i++)  ptr[i]=malloc(sizeof(struct node));
       
       for(i=0;i<=n-2;i++)
         {
          ptr[i]->data=i;
          ptr[i]->next=ptr[i+1];
          }
       
       ptr[n-1]->data=n-1;
       ptr[n-1]->next=NULL;
       
       return(ptr[0]);
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

void push_test()
{
     printf("\nWelcome to functional console\n");
    struct node* head;
      struct node* temp;
      int n,ch=0;
     printf("Enter the value of n  and 1 if build by push ");
      scanf("%d %d",&n,&ch);
      if(ch==0)head = build(n); else head=build_by_push(n);
      temp = head;
      int i=1;
       printf("The length of list is %d\n",len(head));
      while(temp!=NULL)
      {
         printf("Data%d is %d\n",i,temp->data);
         i++; 
         temp = temp->next;
         }
    
    int no;
    printf("\nEnter the number to be pushed to head ");
    scanf("%d ",&no);
    
    push_head(&head,no);
    temp = head;
       i=1;
       printf("The length of list is %d\n",len(head));
      while(temp!=NULL)
      {
         printf("Data%d is %d\n",i,temp->data);
         i++; 
         temp = temp->next;
         }
      

         }//end of push_test
     

main()
{
      int choice,n,no,i;
      printf("Press 1 if you want to execute it via function else press 0 ");
      scanf("%d",&choice);
      if(choice==1) push_test();
      else{ 
      printf("\nWelcome to main console\n");
      struct node* head;
      struct node* temp;
      
      printf("Enter the value of n ");
      scanf("%d",&n);
      head = build(n);
      temp = head;
       i=1;
       printf("The length of list is %d\n",len(head));
      while(temp!=NULL)
      {
         printf("Data%d is %d\n",i,temp->data);
         i++; 
         temp = temp->next;
         }
    
    
    printf("\nEnter the number to be pushed to head ");
    scanf("%d",&no);
    
    push_head(&head,no);
    temp = head;
       i=1;
       printf("The length of list is %d\n",len(head));
      while(temp!=NULL)
      {
         printf("Data%d is %d\n",i,temp->data);
         i++; 
         temp = temp->next;
         }
    
}//end of else
     
      
      //waiting onscreen
      scanf("%d",&i);
}
        
