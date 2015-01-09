#include<iostream>
using namespace std;

main()
{
      int tst=10;
      while(tst--){
      int d,n,i,j,da,day,change=0,month;
      cin>>d>>n;
      int a[n];
      for(i=0;i<n;i++) cin>>a[i];
      //end of input
      
      da=-1;
      for(month=0;month<n;month++)
      {
         for(day=1;day<=a[month];day++)
         { da=(da+1)%d; da++;
           cout<<"\nday/month is"<<day<<"/"<<month<<" and incr da is"<<da; 
           while(da!=day) {da=(da+1)%d;da++; change++; }
            
           }}//end of for
      
      cout<<change<<endl;
      }
      }//end
            
           
          
          
