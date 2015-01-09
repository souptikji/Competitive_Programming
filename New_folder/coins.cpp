#include<iostream>
using namespace std;

main()
{
      int t; cin>>t;
      while(t--)
      {
                int n,s,req,i,sum;
                cin>>n>>s;
                int v[n],coins[sum+1];
                for(i=0;i<n;i++) cin>>v[i];
                
                coins[0]=0;
                for(sum=1;sum<=s;sum++)
                {
                  req = coins[sum-v[0]]+1;
                  for(i=1;i<n;i++) if((coins[sum-v[i]]+1)<req) req = coins[sum-v[i]]+1;
                  coins[sum]=req;
                  }
                
                cout<<"\nAnswer table "<<endl;
                cout<<"SUM--------------COINS"<<endl;
                for(sum=0;sum<=s;sum++) cout<<sum<<"--------------"<<coins[sum]<<endl;
                }//end of tstcase
                }//end
                
                
