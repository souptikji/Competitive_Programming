#include<iostream>
#include<cstdio>
using namespace std;

main()
{
      int tst; scanf("%d",&tst);  while(tst--){
      
      int n,i,min,dif=0,pr;
      scanf("%d",&n);  int a[n];
      scanf("%d",&a[0]); min=a[0];
      
      for(i=1;i<n;i++){
                        scanf("%d",&a[i]);
                        if(a[i]<min) min=a[i];
                        else { pr= a[i]-min;
                               if(pr>dif) dif=pr;}
                               }
      
      if(dif==0)  printf("UNFIT\n");
      else printf("%d\n",dif);
      }}
                             
