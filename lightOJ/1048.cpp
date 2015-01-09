#include<iostream>
using namespace std;

main()
{
      int t,tst;
      cin>>tst;
      for(t=1;t<=tst;t++)
      {
        long long int n,k,i,j,sum,mini,minsum,zero=0,p,ALLSUM=0,reqd,minj;
         cin>>n>>k; reqd=n-k; n++;k++;
         long long int a[n]; 
         for(i=0;i<n;i++) {cin>>a[i]; ALLSUM+=a[i];}
         
         while(zero<reqd)
         { 
            mini=0; minsum=ALLSUM;
            zero=0;
           for(i=0;i<=n-2;i++)
           { 
             if(a[i]==0) zero++;
             else{
                   sum=a[i];
                   j=i+1;
                   while(a[j]==0) j++;
                   sum+=a[j];
                   }//sum
             if(sum<minsum) {minsum=sum; mini=i;minj=j;}
             }//end of for
             if(a[n-1]==0) zero++;
             a[mini]=minsum;
             a[minj]=0; zero++;
             //for(p=0;p<n;p++)  cout<<a[p]<<" ";
//             cout<<" "<<zero<<"zeroes"; 
//             cout<<endl;
             
            
             }//end of while
         
         int b[k]; k=0; int maxel=a[0];
         for(i=0;i<n;i++) if(a[i]){b[k]=a[i]; k++; if(a[i]>maxel) maxel=a[i];}
         cout<<"Case "<<t<<": "<<maxel<<endl;
         for(i=0;i<k;i++) cout<<b[i]<<endl;
         
         }//tsts
         }//end 
         
