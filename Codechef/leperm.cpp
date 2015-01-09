#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<stack>
using namespace std;

main()
{
      int t;cin>>t; while(t--){
          
      long long int n,i,j,loc,inv;
      bool pass=1;
      cin>>n;
      long long int ar[n];
      for(i=0;i<n;i++) cin>>ar[i]; 
      
      loc=0;inv=0;
      for(i=0;i<n;i++){
      if(ar[i+1]<ar[i]) {loc++;inv++;}
      for(j=i+2;j<n;j++) if(ar[j]<ar[i]) inv++;
      }
      
      if(inv==loc) cout<<"YES"<<endl; else cout<<"NO"<<endl;
      }//t
      }//f
