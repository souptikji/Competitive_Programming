#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>

int strrindex(char s[],char t[])
{
    int i,j,slen=strlen(s),tlen=strlen(t);
    if(tlen>slen) return -1;
    for(i=slen-tlen;i>=0;i--)
    {
       for(j=0;j<tlen;j++) if(s[i+j]!=t[j]) break;
       if(j>=tlen-1) return i;
       }

    return -1;
}


main()
{
      int tst=100;
      while(tst--)
      {
                  char s[100],t[100];
                  scanf("%s",&s);
                  scanf("%s",&t);
                  printf("\nIndex found at is %d\n",strrindex(s,t));
                  }}
