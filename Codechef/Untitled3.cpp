#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#define N 10000000
unsigned int prime[N / 64];
#define gP(n) (prime[n>>6]&(1<<((n>>1)&31)))
#define rP(n) (prime[n>>6]&=~(1<<((n>>1)&31)))

using namespace std;

void sieve()
{
    memset( prime, -1, sizeof( prime ) );

    unsigned int i;
    unsigned int sqrtN = ( unsigned int )sqrt( ( double )N ) + 1;
    for( i = 3; i < sqrtN; i += 2 ) if( gP( i ) )
    {
        unsigned int i2 = i + i;
        for( unsigned int j = i * i; j < N; j += i2 ) rP( j );
    }
}
main()
{
      
      sieve();
      vector<int>v;
      int i;
      v.push_back(2);
      for(i=3;i<=10000000;i++) if(i%2!=1 && gP(i)) v.push_back(i);
      
      int t=100; while(t--)
      {
          int num;
          cin>>num;
          
      
          
          
