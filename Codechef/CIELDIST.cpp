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
      int tst; cin>>tst; while(tst--){
      
      int f,ds,dt,d;
      float ans;
      cin>>ds>>dt>>d;
      if(d+dt<ds) ans=ds-dt-d;
      else if(d+ds<dt) ans=dt-ds-d;
      else if(ds+dt>=d) ans=0;
      else ans=d-ds-dt;
      printf("%f\n",ans);
      }}
      
