#include<stdio.h>

int expand(char s[],char t[])
{
     int i=0,inloop=0,j=0,counter=0;
     char prev=0,next=0;
     while(s[i]=='-') i++;
     
     while(s[i])
     {
         if(s[i]=='-') inloop=1;
         else {
               if(inloop){
                          next=s[i]; if(next<prev) return -1;
                          for(counter=1;counter<=next-prev;counter++) t[j++]=(char)(prev+counter);
                          prev=next; next=0; inloop=0;}
               else {prev=s[i];t[j++]=s[i];}
               }
         ++i;
         }//end of while
     
     t[j]='\0';
     return 1;
}

main()
{
      int tst=100;
      while(tst--)
      {
                  char s[100],t[100];
                  scanf("%s",&s);
                  if(expand(s,t)==-1) printf("ERROR\n");
                  else printf("%s\n",t);
                  }}
                          
