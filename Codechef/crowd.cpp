#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

//a(n) = 2 * a(n-1) + 2^(n-4) - a(n-4)

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
b= (b * b) % m; // New base equal b^2 % m
}
return x;
}


long long int func(long long int i)
{
     long long int ans;
   
      if(i==0||i==1) return 0;
      if(i==2) return 1;
      if(i==3) return 3;
      if(i==4) return 8;
      
     ans =  ((2*(func(i-1)%10000007)%10000007)-(func(i-4)%10000007) + exp(2,i-4,10000007) )%10000007;
     return ans;
    
     }
     
main()
{
      int tst;
      cin>>tst;
      while(tst--)
      {
                  long long int n;
                  cin>>n;
                  cout<<func(n-1)<<endl;
                  }}
