#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      int tst; cin>>tst; while(tst--){
          
          long long int n,m,i,val,sz,sum=0;
          bool found=0;
          cin>>n>>m;
          vector<long long int>v;
          
          for(i=0;i<n;i++) {
                           cin>>val;
                           v.push_back(val);
                           }
          
          sort(v.begin(),v.end());
          sz=v.size();
          
          for(i=sz-1;i>=0;i--){
                               sum+=v[i];
                               if(sum>=m) {found=1; break;}
                               }
          
          if(found) cout<<(sz-i)<<endl;
          else cout<<"-1"<<endl;
          }}
          
                           
          
