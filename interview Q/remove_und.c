#include<stdio.h>

void strcpy(char* s,char* t)
{ while(*s++=*t++);}
     
void remove_und(char s[])
{
  int i,j=0;
  int out=0;
  char t[1000];
  
  for(i=0;s[i]!='\0';i++) 
  {
     if(!out && s[i]=='_') {out=1; t[j++]=s[i];}
     else if(s[i]!='_') {out=0; t[j++]=s[i];}}
  
  t[j]='\0';
  
  
  strcpy(s,t);
  
}


main()
{
      int tst=11;
      while(tst--)
      {
        char s[1000];
        scanf("%s",&s);
        remove_und(s);
        printf("%s\n",s);
        }
}
