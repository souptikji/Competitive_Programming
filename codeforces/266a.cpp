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
      //int tst=50; while(tst--){
      
      int n,i,ans=0;
      string s;
      cin>>n;
      cin>>s;
      for(i=0;i<=n-2;i++)
      {
        if(s[i]==s[i+1]) ans++;
        }
      
      cout<<ans<<endl;
      
     // }
      }
        
      
