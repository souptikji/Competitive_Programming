#include<iostream>
using namespace std;

main()
{
     
 
 int n,m,min,max;
 bool i=0;
 cin>>n>>m;
 
 if(n==0 && m>0 ) i=1; 
 else {
        max=m+n-1;
        if(m/n) min=m+(m%n);
        else min=n;
        }
        
        if(i) cout<<"Impossible"<<endl;
        else cout<<min<<" "<<max<<endl;
        
      
        }
