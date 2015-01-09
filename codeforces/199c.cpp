#include<iostream>
#include<string>
#include<vector>
using namespace std;

main()
{
      int tst=50; while(tst--){
      
      long long int now,beg,time,k,b,n,t,z;
      cin>>k>>b>>n>>t;
     
      
      time=0; beg=1;
      while(time<=n)
      {
        cout<<"At begin of "<<time<<"s ,val is "<<beg<<endl;
        now=b+(k*beg);
        beg=now;
        time++;
        }
        z=now;
        cout<<"z is "<<z<<endl;
        
        beg=t; time=0;
        while(beg<z)
        {
          cout<<"At begin of "<<time<<"s ,val is "<<beg<<endl;          
          now=b+(k*beg);
          time++;
          beg=now;
          }
          
          if(time!=0) time--;
          cout<<time<<endl;
          
         }//ststcase
          }
