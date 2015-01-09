#include<iostream>
#include<vector>
#include<cmath>
using namespace std;



long long int exp(long long int b,long long int e,long long int m)
{
long long int remainder;
long long int x = 1;

while (e != 0)
{
remainder = e % 2;
e= e/2;

if (remainder == 1)
x = (x * b) % m;
b= (b * b) % m; 
}
return x;
}


main()
{
      int t; cin>>t;
      while(t--)
      {
                long long int n,yr,a,ans;
                cin>>a>>yr;
                n=yr-2000;
                n=exp(2,n,1000000007);
                cout<<n<<endl;
                if(n==0) ans=a;
                else ans=exp(a,n,1000000007);
                cout<<ans<<endl;
                }}
                
