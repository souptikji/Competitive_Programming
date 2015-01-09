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
         vector<char>v;
         v.clear();
         char c,s1,s2,s3,res,prev;
         int sz;
         
         
         c=getchar(); v.push_back(c); prev=c;
         while((c=getchar())!='\n'){
                                     if(c==prev) v.push_back(c);
                                     else {res=comb(c,prev);
                                           v.pop_back();
                                           v.push_back(res);
                                           prev=res;}
                                           }//end of input
        
      
             if(v.size()==1) sz=1; 
             else {
             s1 = v.back();
             v.pop_back();
             s2 = v.back();
             v.pop_back();
             
             //no combination of first 2 elements is possible
             if(s1==s2) sz=v.size()+2; 
             
             else//if combo possible
             if(s1!=s2) sz=1;
                          
                          
                          }//end of else
      
      
      printf("%d\n",sz);
      
      }//end of tstcase
      }//end
          
                  
