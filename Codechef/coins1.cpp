#include<iostream>
#include<map>
using namespace std;

map<long long,long long>m;

long long max(int n)
{
     if(m.find(n)==m.end()){
                     long long int val = max(n/2) +max(n/3) + max(n/4),max;
                     if(val>n) max=val; else max=n;
                     m[n]=max;
                     return max;
                     }
     else return m[n];
     }
     
main()
{
      m[0]=0; m[1]=1;
    
      long long n;
      while(cin>>n)
      cout<<max(n)<<endl;
      }

