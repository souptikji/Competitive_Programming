#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;



main()
{
      int t,tst;
      cin>>tst;
      for(t=1;t<=tst;t++)
      {
          int n,w,i; ll cnt=0,pita,vx,vy,ans,tot;
          scanf("%d %d",&n,&w);
          vector<long long int>y;
          for(i=0;i<n;i++) {scanf("%lld %lld",&vx,&vy); y.push_back(vy); }
          sort(y.begin(),y.end());
          pita=y[0]; cnt++;
          for(i=1;i<n;i++) if(y[i]>pita+w) {pita=y[i];cnt++;}
          
          printf("Case %d: %lld\n",t,cnt);
          }
          }
         
          
          


