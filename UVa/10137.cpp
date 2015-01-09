#include<iostream>
#include<cstdio>
using namespace std;

main()
{
      int n;
      while(cin>>n)
      {
        if(n==0) break;
        int i;
        long long int a[n],avg=0,pos=0,neg=0,ans;
        double v,val;
        
        for(i=0;i<n;i++) {cin>>val; val*=100; a[i]=val; avg+=a[i];}
       // avg=avg/n;
        avg=((double)avg/n)+0.5;

      //  cout<<"Avg is "<<avg<<endl;
        
        for(i=0;i<n;i++) if(a[i]>avg) pos+=(a[i]-avg);  
                                               else neg+=(avg-a[i]); 
    // cout<<"pos"<<pos<<" neg"<<neg<<endl;
        pos>neg?ans=neg:ans=pos;
        v=ans;
        v=v/100.00;
        printf("$%.2lf\n",v);
        
        }
        }
