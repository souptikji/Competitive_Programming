#include<iostream>
using namespace std;

main()
{
      int n,k,i,j,c,mmax;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++) cin>>a[i];
      cin>>k;
      int max[k];
      
      mmax=0;
      for(i=1;i<k;i++) if(a[i]>mmax) mmax=i;
      max[0]=mmax;
      
      for(i=1;i<=n-k;i++){
                           j=i+k-1;
                           if(a[j]>max[i-1]) max[i]=j;
                           else if(max[i-1]>i-1) max[i]=max[i-1];
                           else if(max[i-1]==i-1){
                                                    mmax=i;
                                                    for(c=i;c<=j;c++) if(a[c]>mmax) mmax=c;
                                                    max[i]=mmax;  
                                                   }
                           } 
      
      for(i=0;i<=n-k;i++) cout<<a[max[i]]<<" ";
      //cout<<"over";
//      int tst;
//      cin>>tst;
      }
