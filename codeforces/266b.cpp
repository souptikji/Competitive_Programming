#include<cmath>
#include<iostream>
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
      
      int n,tt,i,t;
      string s;
      cin>>n>>tt;
      cin>>s;
      
      for(t=1;t<=tt;t++)
      for(i=0;i<n;i++)
      {
          if(s[i]=='B' && s[i+1]=='G') {s[i+1]='B'; s[i]='G';i++; if(i>=n) break;}
          }
      
      cout<<s<<endl;
      
    //  }//tst
      }
          
      
