#include<iostream>
using namespace std;

main()
{
      int tst,t;
      cin>>tst;
      for(t=1;t<=tst;t++)
      {
         int n,i,j,cnt=0;
         cin>>n;
         int a[n],b[n],s[n];
         for(i=0;i<n;i++) {cin>>a[i]>>b[i]; }
         
         //test1
        
         //end of test 1
         for(i=0;i<n;i++)
         for(j=i+1;j<n;j++)
         { if(!((a[j]>a[i] && b[j]>b[i])||(a[j]<a[i] && b[j]<b[i]))) cnt++;}
         
         cout<<"Case #"<<t<<": "<<cnt<<endl; 
         
         }//end of tstcase
         }//end
