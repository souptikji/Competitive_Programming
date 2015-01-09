#include<iostream>
#include<vector>
using namespace std;

main()
{
      int t; cin>>t; while(t--){
          
      int i,n,val,min=100000;
      cin>>n;
      vector<int>v;
      v.clear();
      for(i=0;i<n;i++) {cin>>val; v.push_back(val); if(val<min) min=val;}
      long long sum=0;
      for(i=0;i<n;i++) sum+=(v[i]-min);
      cout<<sum<<endl;
      }}
