#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int a[10000];

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

//
long long int value(long long int i)
{
      long long int term;
      if(i%2==0) term=i/2;
      else term=(i+1)/2;
      long long int bb= exp(2,term,1000000007);
      return bb-1;
      }

long long int func(long long int i)
{
     if(i<=10000 && a[i]) return a[i];
     long long int ans=func(i-1)+value(i-1);
     if(i<=10000) a[i]=ans;
     return(ans);
     }
     
main()
{
      int tst;
      cin>>tst;
      a[1]=2; a[2]=4; a[3]=6; a[4]=10; a[5]=14; a[6]=22; a[7]=30; a[8]=46;
      while(tst--)
      {
                  long long int num;
                  cin>>num;
                  cout<<func(num)<<endl;
                  
                  }}
