#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


main()
{
     int tst=100; while(tst--) {
      
      vector<int>v; v.clear();
      int tot,n,d,a,b,x,y,cnt=0,sum=0,i,j;
      cin>>n>>d>>a>>b;
      
      for(i=0;i<n;i++){ cin>>x>>y; tot=a*x+b*y;  v.push_back(tot);}
     // for(j=0;j<n;j++) cout<<v[j]<<" ";
      sort(v.begin(),v.end());
      for(j=0;j<n;j++) cout<<v[j]<<" ";
      cout<<"end"<<endl;
      
      i=0;
      while(1){ sum+=v[i]; i++; if(sum>d) break;}
      
      cout<<i-1<<endl;
      }//tst
      }//end
      
      
      
