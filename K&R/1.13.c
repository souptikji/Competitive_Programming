#include<stdio.h>

main()
{
      int state=0,len=0,cnt=0;
      char c;
      while((c=getchar())!=EOF)
      {
        if(c!=' ') { len++;
                     if(state==0) cnt++;
                     state=1;}
                     
        else if(state==1) {state=0;
                           printf("\nWord%d  : ",cnt);
                           while(len--) printf("-");
                           len=0;}
                           }
        
        getchar();
        }
