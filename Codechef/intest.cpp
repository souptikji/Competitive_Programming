#include<iostream>
#include<cstdio>
using namespace std;

main()
{
      long long int n,k,t,ans=0;
      scanf("%lld",&n);
      scanf("%lld",&k);
      while(n--)
      {
                scanf("%lld",&t);
                if(t%k==0) { ans++;}}
      
      printf("%d\n",ans);
      }
                
