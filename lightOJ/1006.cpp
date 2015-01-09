#include<iostream>
using namespace std;


int a, b, c, d, e, f;
long long int fn(long long int n)
{
     if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    long long int i,sum;
    for(i=6;i<=n;i++)
    {
       sum=a+b+c+d+e+f;
       a=b;
       b=c;
       c=d;
       d=e;
       e=f;
       f=sum;
     }
  return f;
}
     
     
      
main()
{
      long long int n, caseno = 0, cases,i;
    scanf("%d", &cases);
    while( cases-- ) {
           long long int ar[10001];
           for(i=0;i<10001;i++) ar[i]=-1;
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
       
         printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
}
      
      
