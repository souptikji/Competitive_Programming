#include<stdio.h>


void copy(char* src,char* dest)
{
     while(*dest++=*src++);
     }
     
void main()
{
     char* a="Alla";
    
    *(a+1)='j';
    // char* b;
    // copy(a,b);
   
   //  printf("%s %s",a,b);
     
     getchar();getchar();
     
     }
