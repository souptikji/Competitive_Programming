#include<stdio.h>


void squeeze(char text[], char pat[])
{
     int i,j,freq[26];
     for(i=0;i<27;i++) freq[i]=0;
     
     for(i=0;pat[i]!='\0';++i) ++freq[pat[i]-'a'];
     for(i=j=0;text[i]!='\0';i++) if(!freq[text[i]-'a']) text[j++]=text[i];
     text[j]='\0';
}
     
main()
{
      int tst=10;
      while(tst--)
      {
                  char text[100],pat[20];
                  scanf("%s %s",&text,&pat);
                  squeeze(text,pat);
                  printf("%s\n",text);
                  }}
      
