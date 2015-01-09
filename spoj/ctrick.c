#include<stdio.h>
#include<stdlib.h>

struct node{
             int index;
             int data;
             struct node* next;
             };
             
main()
{
      int tst; scanf("%d",&tst);
      while(tst--)
      {
         int n,i,cnt;
         scanf("%d",&n);
         struct node* head;
         struct node* curr;
         //head
         head= malloc(sizeof(struct node));
         head->index=0;
         head->data=-2;
         curr = head;
         //head
         
         for(i=1;i<=n-1;i++)
         {
            struct node* nnew = malloc(sizeof(struct node));
            nnew->index=i;  nnew->data=-1;
            curr->next=nnew;
            curr=curr->next;
            }
         
         curr->next=head;
      
       //testing
       curr=head;
       for(cnt=0;cnt<2*n;cnt++) { printf("Index%d data is %d\n",curr->index,curr->data); curr=curr->next;}
       printf("Thank you.\n"); 
       
       }//tstcase
       }//end    
         
