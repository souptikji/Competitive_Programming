#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

main()
{  
   
      
                  int x,req2,ans;
                  double req,req1,n,y;
                  
                  cin>>n>>x>>y;
                  req=(y/100)*n;
                  req1=ceil(req);
                  req2=req1;
                  //cout<<req<<" "<<req1<<" "<<req2<<endl;
                  ans=req2-x;
                  if(ans<0) ans=0;
                  cout<<ans<<endl;
                  
                  }
                  
