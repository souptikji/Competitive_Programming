#include<iostream>
#include<vector>
using namespace std;

char comb(char f, char s)
{
     if((f=='a'&&s=='b')||(f=='b'&&s=='a')) return 'c';
     else  if((f=='a'&&s=='c')||(f=='c'&&s=='a')) return 'b';
     else  if((f=='b'&&s=='c')||(f=='c'&&s=='b')) return 'a';
     }
     
main()
{
      int tst; cin>>tst; getchar();
      while(tst--)
      {
         char prev,curr,c;
         int extra=0,sz;
         
         c=getchar();
         prev=c;
         
         while((c=getchar())!='\n')
         {
             curr=c;
             if(curr==prev) extra++;
             else prev = comb(curr,prev);
             }
             
             if(curr==prev) sz=extra+1;
             else sz=1;
             
             cout<<sz<<endl;
             }//end of tstcase
             }//end
          
                  
