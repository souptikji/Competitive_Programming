#include<iostream>
#include<string>
using namespace std;

main()
{
      int t; scanf("%d",&t);
      while(t--)
      {
         int n,prev=0,cnt=1,i,vel;
         scanf("%d",&n);scanf("%d",&vel);prev=vel;
         for(i=1;i<n;i++){
                          scanf("%d",&vel);
                          if(prev>vel) {cnt++; prev=vel;}
                         
                          }
         
         printf("%d\n",cnt);
         }//tstcase
         }//end
         
