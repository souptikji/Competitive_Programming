#include<iostream>
#include<cmath>
using namespace std;


void sieve(bool prime[])
{
   int N=300;  
    memset( prime, -1, N * sizeof( prime[0] ) );
    prime[0] = prime[1] = false;
    int sqrtN = ( int )sqrt( ( double )N );
    for( int i = 2; i <= sqrtN; i++ ) if( prime[i] )
    {
        for( int j = i * i; j < N; j += i )
            prime[j] = false;
    }
}


int primef (int x)
{
long i;int n; /* counter */
long c; /* remaining product to factor */
c = x;
if((c % 2) == 0) n++;
while ((c % 2) == 0) {

c = c / 2;
}
i = 3;
while (i <= (sqrt(c)+1)) {
if ((c % i) == 0) {n++;
//printf("%ld\n",i);
while((c % i) == 0) c = c / i;
}
else
i = i + 2;
}
if (c > 1) n++;
return n;
}
main()
{
      int tst;
      cin>>tst;
      bool prime[300];
      sieve(prime);
      while(tst--)
      {
                 int a,n;
                 cin>>a;
                 int i=6,count=1;
                 for(i=6;count<a;i++)
                 {
                 n=primef(i);
                 cout<<"\nn is"<<n;
                 if(prime[n]==1){cout<<"\nn is prime"; count++;}
                 
                 }
                 cout<<i<<endl;
                 }}
                            
