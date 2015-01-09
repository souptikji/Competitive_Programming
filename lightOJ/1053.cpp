#include<iostream>
#include<cmath>
using namespace std;

main()
{
      int t,tst;
      cin>>tst;
      
      for(t=1;t<=tst;t++)
      {
        int a,b,c,max,sum=0;
        
        cin>>a;
        max=a;
        cin>>b;
        if(b>max) max=b;
        cin>>c;
        if(c>max) max=c;
       // cout<<"max is "<<max<<endl;
        if(a!=max) sum+=a*a;
         if(b!=max) sum+=b*b;
         if(c!=max) sum+=c*c;
        // cout<<"sum is "<<sum<<endl;
         if(sum==max*max) cout<<"Case "<<t<<": yes"<<endl;
         else cout<<"Case "<<t<<": no"<<endl;
         }
         }
        
        
        
