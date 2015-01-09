#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

main()
{
     // int tst=50; while(tst--){
      
      string s,t;
      cin>>s>>t;
      //cout<<s<<" "<<t<<endl;
      int i=0,j,slen=s.length(),tlen=t.length();
      
      for(j=0;j<tlen;j++)
      {
          if(s[i]==t[j]) i++;
          if(i>=tlen) break;
          }
      
      cout<<i+1<<endl;
      
    //  }//sts
      }//main
      
