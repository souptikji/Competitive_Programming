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





struct node* build(int n)
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

//Q1
int count(struct node* head,int num)
{
    struct node* curr=head;
    int cnt=0;
    while(curr!=NULL) { if(curr->data==num) cnt++; curr=curr->next;}
    return cnt;
}

void count_test()
{
     int n,num;
     printf("\nEnter the size of link list ");
     scanf("%d",&n);
     struct node* head= build(n);
     printf("\nWhich num you want to search? ");
     scanf("%d",&num);
     printf("\nNumber of occurences of %d is %d\n",num,count(head,num));
}
//End of Q1


//Q2
int getNth(struct node* head,int index)
{
    struct node* curr=head;
    int num=0;
    while(num<index)
    { if(curr==NULL) break;
      curr=curr->next;
      num++;
      }
    
    if(curr) return (curr->data);
    else return -1;

}

void getNth_test()
{
     int n,index;
     printf("\nEnter the size of link list ");
     scanf("%d",&n);
     struct node* head= build(n);
     printf("\nWhich index you want? ");
     scanf("%d",&index);
     printf("\nValue of index%d is %d\n",index,getNth(head,index));
     
//Q2


main()
{
      int tst;
      printf("No.of tstcases ");
      scanf("%d",&tst);
      while(tst--)
      {
         count_test();
         getNth_test();
         }
         }
     
