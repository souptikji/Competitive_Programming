#include<iostream>
#include<vector>
using namespace std;

long long int nxtnum(int a[],int k)
{
    int i=0;
    while(true)
    { 
    if(a[i]==0) {a[i]=1;k++;if(k==n-1) break;}
    else
        { a[i]=0;
          k--;i++;} 
          }
          }
     
main()
{
      int t,tst; cin>>t;
      for(tst=1;tst<=t;tst++)
      {
        long long int n,i,k;
        cin>>n;
        long long int sum;
        vector<long long int>v;
        for(i=0;i<20;i++) cin>>val[i];
        long long int a[20];
        
        k=0;
        for(i=0;i<n;i++) a[i]=0;
        sum=0;
        for(i=0;i<n;i++) sum+=a[i]*val[i];
        v.push_back(sum);
        
        while(true)
        {
          
        
        
