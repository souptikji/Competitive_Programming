#include<iostream>
#include<cstdio>
using namespace std;

main()
{
      int n,t,i,cnt,j;
      
      while(cin>>n)
      {cnt=0;
      int A[n];
      scanf("%d",&t);
      for(i=0;i<n;i++) scanf("%d",&A[i]);
      bool S[n][t];
      
      for (i = 0; i <= n; i ++) S[i][0] = true;
      for (j = 1; j <= t; j ++) S[0][j] = false;
       for (i = 1; i <= n; i ++)
       for (j = 1; j <=t ; j ++)
         {S[i][j] = S[i - 1][j]|| (A[i]<=j && S[i - 1][j - A [i]]);
         if(S[i][j]==true) cnt++;
           }
           
            
           cout<<cnt<<endl;
           }
           }
      
      
