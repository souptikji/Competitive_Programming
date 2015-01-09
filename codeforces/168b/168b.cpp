#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
char buf[1048576];

char fir(int len)
{ int i,c=' ';
     for(i=0;i<len;i++) if(buf[i]!=32) return buf[i];
     return c;
     }
     
     
main()
{
      
 int len,i,sup=0;
  
  int lin=0;
  while(gets(buf)){
    
    
    len = strlen(buf);
    if(fir(len)=='#')
    {sup=1;if(lin!=0)cout<<endl; for(i=0;i<len;i++) cout<<buf[i];}
    else{if(sup==1) {cout<<endl;sup=0;}
         for(i=0;i<len;i++) if(buf[i]>32 && buf[i]<127) cout<<buf[i];
         } lin++;
         }//end of while
         
         }
         
         
    
