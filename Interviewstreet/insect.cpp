#include<iostream>
#include<stack>
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
         stack<char>s;
         char c,s1,s2,s3,res;
         int sz;
         while(!s.empty()) s.pop();
         
         c=getchar(); s.push(c);
         while((c=getchar())!='\n'){
                                     if(c==s.top()) s.push(c);
                                     else {res = comb(c,s.top());
                                           s.pop();
                                           s.push(res);}
                                           }//end of input
        
      while(true)
      {
             if(s.size()==1) {sz=1; break;} 
             s1 = s.top();
             s.pop();
             s2 = s.top();
             s.pop();
             
             //no combination of first 2 elements is possible
             if(s1==s2) {sz=s.size()+2;  break;}
             
             else//if combo possible
             if(s1!=s2) {
                          sz=1;
                          break;
                          }
                          }//end of while true
      
      
      printf("%d\n",sz);
      
      }//end of tstcase
      }//end
          
                  
