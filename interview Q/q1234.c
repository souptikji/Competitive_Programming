#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//REQD FOR ALL
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
//END OF REQD FOR ALL

//---------------------------------------------------QUESTIONS BEGIN-------------------------------------------------------

//-------------------------------------------------------Q1---------------------------------------------------------------
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
     push(&head,2);
     push(&head,2);
     push(&head,2);
     struct node* curr=head;
     while(curr!=NULL) {printf("Data is %d\n",curr->data); curr=curr->next;}
     printf("\nWhich num you want to search? ");
     scanf("%d",&num);
     printf("\nNumber of occurences of %d is %d\n",num,count(head,num));
}
//-----------------------------------------------------End of Q1----------------------------------------------------------------


//---------------------------------------------------------Q2---------------------------------------------------------------------
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
}    
//----------------------------------------------------------------END OF Q2-----------------------------------------------------------------

//-----------------------------------------------------------------Q3-----------------------------------------------------------------------
void DeleteList(struct node** headref)
{
     struct node* now;
     struct node* curr;
     
     while((*headref)!=NULL) { now=*headref;
                          *headref=(*headref)->next;
                          free(now);
                          }
     
}
void DeleteList_test()
{
     int n,index;
     printf("\nEnter the size of link list ");
     scanf("%d",&n);
     struct node* head= build(n);
     struct node* curr=head;
     while(curr!=NULL){ printf("Data is %d\n",curr->data); curr=curr->next;}
     
     getchar(); getchar();
     DeleteList(&head);
     curr=head;
     while(curr!=NULL) {printf("Now Data is %d\n",curr->data); curr=curr->next;}
     printf("\nCount is %d\n",len(head) );
}
//-------------------------------------------------------------------------Q3---------------------------------------------------


//------------------------------------------------------------------------Q4----------------------------------------------------
int pop(struct node** headref)
{
    if(*headref==NULL) return -1;
    struct node* curr=(*headref);
    int num=curr->data;
    (*headref)=curr->next;
    return(num);
}

void pop_test()
{
     int n,t;
     printf("\nEnter the length of list ");
     scanf("%d",&n);
     struct node* head = build(n);
     printf("\nEnter the number of pops ");
     scanf("%d",&t);
     while(t--) {printf("%d\n",pop(&head));}
     printf("\nThank you.");\
}
//Q4


//Q5
void InsertNth(struct node** headref,int index,int num)
{
     struct node* nnew = malloc(sizeof(struct node));
     struct node* curr=(*headref);
     nnew->data=num;
     int i;
     if(index==0) {nnew->next=curr; *headref=nnew; return;}
    
     
     else{
     if(curr==NULL)  {printf("Invalid index\n"); return;}
     for(i=0;i<=index-2;i++) {curr=curr->next; if(curr==NULL) {printf("Invalid index\n"); return;}  }
     nnew->next = curr->next;
     curr->next=nnew;
     }//end of else

}

void InsertNth2(struct node** headref,int index,int num)
{
     int in;
     struct node* curr;
     if(index==0) push(headref,num);
     else
     {
         curr=*headref;
         for(in=0;in<index;in++) {assert(curr!=NULL);
                                  curr=curr->next;}
         assert(curr!=NULL);
         push(&(curr->next),num);
         }
     
}

void InsertNth_test()
{
     int t,n,index,num;
     
     printf("\nEnter the length of LL ");
     scanf("%d",&n);
     struct node* head = build(n);
     struct node* curr;
     printf("\nNo. of tstcase ");
     scanf("%d",&t);
     while(t--)
     {
         printf("\nEnter index and num ");
         scanf("%d %d",&index,&num);
         InsertNth2(&head,index,num);
         curr=head;
         while(curr!=NULL) {printf("Now Data is %d\n",curr->data); curr=curr->next;}
         printf("\nCount is %d\n",len(head) );
         }
         printf("\nThank you.");
}
//Q5

//Q6

void sortedInsert(struct node** headref, struct node* newnode)
{
     struct node* curr;
     struct node* nx;
     int num = newnode->data;
     curr=*headref;
     
     if(((curr)== NULL)||num<=(curr->data))  { newnode->next=curr;
                                               *headref = newnode;
                                               return ;}
     
      
     else{nx=curr->next;
           while(1)
           { if(num>=curr->data && (nx==NULL || num<nx->data)) { newnode->next=nx;
                                                                 curr->next=newnode;
                                                                 printf("Inserted\n");
                                                                 return;}
             else { curr=curr->next; nx=nx->next;}}}
             } //end of func
         

void sortedInsert_test()
{
     int n,el,q;
     struct node* head=NULL;
     struct node* curr=head;
     printf("\nHow many elements in original LL? ");
     scanf("%d",&n);
     while(n--) {printf("\nEnter element ");
                 scanf("%d",&el);
                 push(&head,el);
                 }  
    printf("\nNow the array is\n");  
     curr=head;
     while(curr!=NULL) {printf("Now Data is %d\n",curr->data); curr=curr->next;}
     printf("\nCount is %d\n",len(head) );
     
      
    printf("\nNo. of queries? ");
    scanf("%d",&q);
    while(q--) {scanf("%d",&el);
                struct node* newnode = malloc(sizeof(struct node));
                newnode->data=el;
                
                sortedInsert(&head,newnode);
     printf("Now the array is\n");  
     curr=head;
     while(curr!=NULL) {printf("Now Data is %d\n",curr->data); curr=curr->next;}
     printf("\nCount is %d\n",len(head) );}//end of queries
     
   printf("\nThank you.");
}
//Q6

//Q7 

void InsertSort(struct node** headref)
{
     struct node* curr;
     struct node* nxt;
     struct node* result;
     
     result=NULL;
     curr=*headref; if(curr==NULL) return;
     nxt=curr->next;
     
     while(nxt!=NULL)
     {
        sortedInsert(&result,curr);
        curr=nxt;
        nxt=nxt->next;}
     
     sortedInsert(&result,curr);
     *headref=result;
}

     
void InsertSort_test()
{
  struct node* head=NULL;
  struct node* curr;
  int n,el;
  
  printf("\nHow many elements in original LL? ");
     scanf("%d",&n);
     while(n--) {printf("\nEnter element ");
                 scanf("%d",&el);
                 push(&head,el);
                 }  
  
  curr=head;
  while(curr!=NULL) { printf("Initial data is %d\n",curr->data); curr=curr->next;}
  InsertSort(&head);
  curr=head;
  while(curr!=NULL) { printf("Now data is %d\n",curr->data); curr=curr->next;}
}
//Q7
     
//-----------------------------------------------------------------------------Q8----------------------------------------------------
void append(struct node** aref, struct node** bref)     
{
     if(bref==NULL) return;
     struct node* curr;
     curr=*aref;
     if(curr==NULL) { *aref = *bref;
                      *bref=NULL;
                      return;}
     
     while(curr->next!=NULL) curr=curr->next;
     curr->next=*bref;
     *bref=NULL;
}
void append_test()
{
     struct node* a;
     struct node* b;
     struct node* curr;
     int n,el;
     
     a=NULL;
     printf("Enter number of elements in a ");
     scanf("%d",&n);
     while(n--) { scanf("%d",&el); push(&a,el);}
     
     b=NULL;
     printf("Enter number of elements in b ");
     scanf("%d",&n);
     while(n--) { scanf("%d",&el); push(&b,el);}
     
     append(&a,&b);
     printf("\nLL a is ");
     curr=a;
     while(curr!=NULL) {printf("%d ",curr->data); curr=curr->next;}
      printf("\nLL b is ");
     curr=b;
     while(curr!=NULL) {printf("%d ",curr->data); curr=curr->next;}
     printf("\nThank you.\n");
}
//---------------------------------------------------------------Q8---------------------------------------------------------------------

//----------------------------------------------------------------Q9--------------------------------------------------------------------
void frontBackSplit(struct node* source, struct node** frontref, struct node** backref)
{
     if(source==NULL) return;
     if(source->next==NULL) { *frontref=source; return;}
     
     struct node* fast;
     struct node* slow;
     fast=source; slow=source;
     while(fast->next!=NULL)
     {
        fast=fast->next;
        if(fast->next!=NULL) { fast=fast->next; slow=slow->next;}
        else break;}
     
     *backref=slow->next;
     slow->next=NULL;
     *frontref=source;
     
}

void frontBackSplit2(struct node* source, struct node** frontref, struct node** backref)
{
     struct node* curr=source;
     int slen,flen,ind;
     slen=len(source);
     if(slen==1||slen==0) {*frontref=source; *backref=NULL; return;}
     
     flen=slen-(slen/2);
     ind=1;
     while(ind<flen) {curr=curr->next; ind++; }
     *backref=curr->next;
     curr->next=NULL;
     *frontref=source;
}
     
            

void frontBackSplit_test()
{
     int n,el;
     struct node* source=NULL;
     struct node* front=NULL;
     struct node* back=NULL;
     struct node* curr;
     printf("How many elements in LL? ");
     scanf("%d",&n);
     printf("Elemnts will be inserted in reverse order\n");
     while(n--) { scanf("%d",&el); push(&source,el);}
     
     curr=source;
     printf("\nOriginal elements of source are ");
     while(curr!=NULL) { printf("%d ",curr->data); curr=curr->next; }
     
     frontBackSplit2(source,&front,&back);
     
     printf("\nNow elements of front are ");
     curr=front;
     while(curr!=NULL) { printf("%d ",curr->data); curr=curr->next; }
     
      printf("\nNow elements of back are ");
     curr=back;
     while(curr!=NULL) { printf("%d ",curr->data); curr=curr->next; }
     
     printf("\nThank you.\n");
}
//------------------------------------------------------------------------Q9--------------------------------------------------------------

//------------------------------------------------------------------------Q10--------------------------------------------------------------
void removeDuplicates(struct node* head)
{
     if(head==NULL||head->next==NULL) return;
     struct node* prev;
     struct node* curr;
     prev=head;
     curr=prev->next;
     
     while(curr!=NULL)
     {
        if(prev->data==curr->data) { prev->next=curr->next;
                                     free(curr);
                                     curr=prev->next;}
         
         else { prev=prev->next; curr=curr->next; }}
}

void removeDuplicates_test()
{
        
     int n,el;
     struct node* source=NULL;
     struct node* curr;
     printf("How many elements in LL? ");
     scanf("%d",&n);
     printf("Elemnts will be inserted in reverse order\n");
     while(n--) { scanf("%d",&el); push(&source,el);}
     
     curr=source;
     printf("\nOriginal elements of source are ");
     while(curr!=NULL) { printf("%d ",curr->data); curr=curr->next; }
     
     removeDuplicates(source);
     
     printf("\nNow elements of LL are ");
     curr=source;
     while(curr!=NULL) { printf("%d ",curr->data); curr=curr->next; }
     
     printf("\nThank you.\n");
}
//---------------------------------------------------------------------------Q10------------------------------------------------------------

//---------------------------------------------------------------------------Q11----------------------------------------------------------
void moveNode(struct node** sourceref, struct node** destref)
{
     if(*sourceref==NULL) {printf("\nERROR\n"); return;}
     struct node* newsource = (*sourceref)->next;                    
     (*sourceref)->next=*destref;
     *destref=*sourceref;
     *sourceref=newsource;
}

void moveNode_test()
{
     int n,el;
     struct node* source=NULL;
     struct node* dest=NULL;
     struct node* curr;
     printf("How many elements in source? ");
     scanf("%d",&n);
     printf("Elemnts will be inserted in reverse order\n");
     while(n--) { scanf("%d",&el); push(&source,el);}
     
     curr=source;
     printf("\nOriginal elements of source are ");
     while(curr!=NULL) { printf("%d ",curr->data); curr=curr->next; }
     
      printf("How many elements in dest? ");
     scanf("%d",&n);
     printf("Elemnts will be inserted in reverse order\n");
     while(n--) { scanf("%d",&el); push(&dest,el);}
     
     curr=dest;
     printf("\nOriginal elements of dest are ");
     while(curr!=NULL) { printf("%d ",curr->data); curr=curr->next; }
     
     moveNode(&source,&dest);
     
     curr=source;
     printf("\nNow elements of source are ");
     while(curr!=NULL) { printf("%d ",curr->data); curr=curr->next; }
     
     curr=dest;
     printf("\nNow elements of dest are ");
     while(curr!=NULL) { printf("%d ",curr->data); curr=curr->next; }
     
     printf("\nThank you.\n");
     }
//----------------------------------------------------------------------Q11------------------------------------------------------------

//----------------------------------------------------------------------Q12------------------------------------------------------------
void alternatingSplit(struct node* source, struct node** aref, struct node** bref)
{
     if(source==NULL) {printf("\nERROR\n"); return;}
     struct node* curr; 
     int nextinb;
     curr=source; nextinb=0;
     
     while(source!=NULL)
     {
        if(nextinb) {moveNode(&source,bref); nextinb=0; }
        else {moveNode(&source,aref); nextinb=1; }}
}

void alternatingSplit_order(struct node* source, struct node** aref, struct node** bref)
{
     if(source==NULL) {printf("\nERROR\n"); return;}
     struct node* atail=NULL;
     struct node* btail=NULL;
     moveNode(&source,aref);
    
     atail=*aref;
     if(source!=NULL){ moveNode(&source,bref);
     btail=*bref;
     }
     
     while(source!=NULL)
     {
        moveNode(&source,&(atail->next));
        atail=atail->next;
        
        if(source!=NULL) { moveNode(&source,&(btail->next)); btail=btail->next; }
        }
}
        
void alternatingSplit2(struct node* source, struct node** aref, struct node** bref)
{
     if(source==NULL) {printf("\nERROR\n"); return; }
     struct node* atail=NULL;
     struct node* btail=NULL;
     struct node a;
     struct node b;
     a.next=NULL; b.next=NULL;
     atail=&a; btail=&b;
     while(source!=NULL)
     {
       moveNode(&source,&(atail->next));
       atail=atail->next;
       if(source!=NULL) { moveNode(&source,&(btail->next)); btail=btail->next;}
       }
       
     *aref = a.next;
     *bref=b.next;
}
     

void alternatingSplit_test()
{
     int n,el;
     struct node* source=NULL;
     struct node* a=NULL;
     struct node* b=NULL;
     struct node* curr;
     printf("How many elements in source? ");
     scanf("%d",&n);
     printf("Elemnts will be inserted in reverse order\n");
     while(n--) { scanf("%d",&el); push(&source,el);}
     
     curr=source;
     printf("\nOriginal elements of source are ");
     while(curr!=NULL) { printf("%d ",curr->data); curr=curr->next; }
     
     alternatingSplit2(source,&a,&b);
     
      curr=a;
     printf("\nNew elements of a are ");
     while(curr!=NULL) { printf("%d ",curr->data); curr=curr->next; }
     
     curr=b;
     printf("\nNew elements of b are ");
     while(curr!=NULL) { printf("%d ",curr->data); curr=curr->next; }
     
     
     
     printf("\nThank you.\n");
}
//--------------------------------------------------------------------------Q12----------------------------------------------------
     
     



main()
{
      int tst;
      printf("No.of tstcases ");
      scanf("%d",&tst);
      while(tst--)
      {
        //count_test();
         //getNth_test();
         //DeleteList_test();
        // pop_test();
       // InsertNth_test();
     //sortedInsert_test();
         //InsertSort_test();
         //append_test();
        // frontBackSplit_test();
       // removeDuplicates_test();  
      // moveNode_test();
      alternatingSplit_test();
         }
         }
     
