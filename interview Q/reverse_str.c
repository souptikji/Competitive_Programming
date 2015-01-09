#include<stdio.h>

char str[1000];  

void reverse(char* head)
{
     char* i;
     char* j;
     char temp;
     int len=0;
     i=head;
     j=i;
     while((*j)!='\0') {j++,len++;}
     j--;
     printf("\nLength of the string is %d",len);
     
                while(j>=i)
                { temp=*i;
                  *i=*j;
                  *j=temp;
                  i++;j--;}
                  
                  }
    
     
     
main()
{
      int t;scanf("%d\n",&t);
      while(t--)
      {
              
         scanf("%[^\n]",&str);
         printf("%s\n",str);
         reverse(str);
         printf("%s\n",str);
         }
         int c;
         scanf("%d",&c);
         }
      
