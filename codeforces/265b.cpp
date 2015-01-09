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
      int tst=50; while(tst--){
      
      int n,i;
      cin>>n;
      int h[n];
      for(i=0;i<n;i++) cin>>h[i];
      int ans=h[0]+1,dif,ht=h[0];
      
      for(i=1;i<n;i++)
      {
          if(ht<=h[i])
          {
              ans++;
              dif=h[i]-ht;
              ans+=dif;
              ht=h[i];
              ans++;}
          
          else{
               dif=ht-h[i];
               ans+=dif;
               ht=h[i];
               ans++;
               ans++;
               }}//for
          
          cout<<ans<<endl;
          
          }//tst
          }//main
