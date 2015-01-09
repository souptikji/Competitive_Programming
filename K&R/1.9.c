#include<stdio.h>

main()
{
      char c;
      int out=0;
      while((c=getchar())!=EOF)
      {
         if(c==' ' && !out) {putchar(c); out=1;}
         else if(c!=' ') {putchar(c); out=0;}
         }
         }
