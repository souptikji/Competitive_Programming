#include<iostream>
#define MOD 1000000007
using namespace std;

long long int cat[1000];

int c(int n)
{
    if(n==0) return 1;
    long int val;
   if(cat[n]) return cat[n];
    
         val=(((4*n-2)*c(n-1))/(n+1));
         
         return val;
         
         }

main()
{
      int tst,N; cin>>tst; while(tst--)
      {
          cin>>N; cout<<c(N)%MOD<<endl;
          //cout<<c(N)<<endl;
          }
          }
