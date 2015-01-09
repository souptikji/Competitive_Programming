#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
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
      int t; scanf("%d",&t); while(t--)
      {
          int n,m,i;
         scanf("%d %d",&n,&m);
         //cin>>n>>m;
         
          for(i=n;i<=m;i++) if(i!=1 && i%2!=0 && gP(i)) printf("%d\n",i); 
          }}
          
          
