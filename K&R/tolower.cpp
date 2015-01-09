#include<stdio.h>

void lower(char str[])
{
     int i;
     for(i=0;str[i];str[i]= ((str[i]>='A' && str[i]<='Z')?str[i]+'a'-'A':str[i]),i++ );
     }
     
main()
{
      int tst=100;
      while(tst--)
      {
         char str[100];
         scanf("%s",&str);
         lower(str);
         printf("%s",str);
         }}
  
