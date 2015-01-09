
ios_base::sync_with_stdio(0);
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      
                  int n,a,b,val,i,pre,post;
                  vector<int>v;
                  cin>>n>>a>>b;
                  for(i=0;i<n;i++) {cin>>val;v.push_back(val);}
                  sort(v.begin(),v.end());
                  
                  pre=v[n-a-1]; post=v[n-a];
                  cout<<post-pre<<endl; 
                  
                  
                  
                  //end of test
                  }//edm
