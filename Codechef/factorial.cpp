#include<iostream>
#include<cstdio>
using namespace std;

unsigned long long ans[100];


    
main()
{
      long long int n,t,last=0;
      scanf("%lld",&t);
      int i;
      while(t--)
      {
        scanf("%lld",&n);
        if(ans[n]) printf("%lld\n",ans[n]);
        else
        {
            for(i=last+1;i<=n;i++)
            {
              if(i==0||i==1) ans[i]=1;
              else ans[i]=i*ans[i-1];
              }
              last=n;
              printf("%lld\n",ans[n]);
              }//else
              
              }//tst
              }//f
        
                
