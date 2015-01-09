#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
using namespace std;

bool ishigh(int num,int loc)
{
     return(num&(1<<loc));}

main()
{
      int tst;
      cin>>tst;
      while(tst--)
      {
                  int p,i,loc,j,sum,maj=0,num;
                  cin>>p;
                  vector<int>v;
                  vector<int>ans;
                  for(i=0;i<p;i++) {cin>>num; v.push_back(num);ans.push_back(0);maj+=num;}
                  maj=maj/2;
                  
                  for(i=0;i<(1<<p);i++)
                  { sum=0;
                    for(loc=0;loc<p;loc++) if(ishigh(i,loc)) sum+=v[loc];
                    if(sum<maj) continue;
                   // cout<<"Majority of "<<sum<<" ";
                    for(loc=0;loc<p;loc++) if(ishigh(i,loc) && sum-v[loc]<maj) ans[loc]++; 
                    cout<<endl;
                    }
                  cout<<endl;
                  for(i=0;i<p;i++) cout<<"party "<<i<<" has power index "<<ans[i]<<endl;
                  }//tst
                  }//main
                    
