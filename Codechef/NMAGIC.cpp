#include<iostream>
#include<string>
using namespace std;

main()
{
      int t; cin>>t;
      while(t--){
      
      string s;
      cin>>s;
      int len=s.length(),i=len-1,j;
      while(s[i]=='7' && i>=0) i--;
      
      if(i<0)
      {
        for(i=0;i<len;i++) s[i]='4';
        string s2="4";
        s=s2+s;}
      else
      {s[i]='7';
      for(j=i+1;j<len;j++) s[j]='4';}
      cout<<s<<endl;
      }//tst
      }
