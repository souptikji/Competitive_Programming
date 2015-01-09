#include<iostream>
using namespace std;

int max(int a,int b,int c)
{
    int max=a;
    if(b>a) max=b;
    if(c>b) max=c;
    return max;
}
main()
{
     // int t; cin>>t;
      
                int s,sum,a,b,c,req,req1,req2,i;
                cin>>s>>a>>b>>c;
                int coins[s+1];
                for(i=0;i<=s;i++) coins[i]=0;
               
                
                coins[0]=0;
                for(sum=1;sum<=s;sum++)
                {
                  req=0; req1=0; req2=0;
                  if(sum-a>=0) req = coins[sum-a]+1; if(coins[sum-a]==0 && sum!=a) req=0;
                  if(sum-b>=0) req1 = coins[sum-b]+1; if(coins[sum-b]==0 && sum!=b) req1=0;
                  
                  if(sum-c>=0) req2 = coins[sum-c]+1; if(coins[sum-c]==0 && sum!=c) req2=0;
                   
                   coins[sum]= max(req,req1,req2);
                  }
                
                //cout<<"\nAnswer table "<<endl;
//               cout<<"SUM--------------COINS"<<endl;
//                for(sum=0;sum<=s;sum++) cout<<sum<<"--------------"<<coins[sum]<<endl;
                  
                  cout<<coins[s]<<endl;
                
                
                
               
                }//end
                
                
