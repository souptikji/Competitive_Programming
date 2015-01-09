#include<iostream>
using namespace std;

long long int pow(int n)
{
     if(n==1) return 2;
     else if(n==0) return 1;
     else if(n%2) return (2*pow((n-1)/2)*pow((n-1)/2));
     else if(n%2==0) return (pow(n/2)*pow(n/2));
     }
     
main()
{
      int t,tst; cin>>t;
      for(tst=1;tst<=t;tst++)
      {
        int n;
        long long int sz,i;
        cin>>n;
        sz=pow(n);
        cout<<"\nsz is"<<sz<<endl;
        int a[sz];
        for(i=0;i<sz;i++) a[i]=0;
         cout<<a[111066]<<endl;;
        
        }
        }
