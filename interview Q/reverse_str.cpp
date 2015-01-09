#include<stdio.h>

using namespace std;

void reverse(char* head)
{
     char* i;
     char* j;
     char temp;
     int len=0;
     i=head;
     j=i;
     while(*j!='\0') {j++,len++;}
     j--;
     printf("\nLength of the string is %d",len);
     
                while(j>=i)
                { temp=*i;
                  *i=*j;
                  *j=temp;
                  i++;j++;}}
                  
                  }
    
     
     
main()
{
      int t;cin>>t;
      while(t--)
      {
         char str[1000];       
         scanf("%[^\n]s",&str);
         reverse(str);f
         printf("%s\n",str);
         }
         }
      
