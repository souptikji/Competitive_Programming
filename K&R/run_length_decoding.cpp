#include<iostream>
using namespace std;

bool isdigit(char c)
{ return( (c>'0'&&c<'9')? true:false );}

string run_length_decoding(string s)
{
       string ans="";
       int i,num=0;
       char prev;
       for(i=0;s[i];i++)
       {
          if(!isdigit(s[i])) {while(num--) ans+=prev; prev=s[i]; num=0;}
          else {num*=10; num+=s[i]-'0';}
          }
  while(num--) ans+=prev;         
 return(ans);
}

main()
{
      int tst=100;
      while(tst--)
      {
        string orig;
        cin>>orig;
       
        cout<<run_length_decoding(orig)<<endl;
        }}
     
