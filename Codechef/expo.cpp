#include <cstdlib>
#include<vector>

#include <iostream>
#include <cstdio>
#include<cmath>
using namespace std;

template< class Int >
Int powmod( Int b, Int p, Int m = 0 )
{
    vector< bool > bits;
    while( p > 0 )
    {
        Int np = p / 2;
        bits.push_back( np + np != p );
        p = np;
    }

    Int r = 1;
    for( int i = bits.size() - 1; i >= 0; i-- )
    {
        r *= r; if( m > 0 ) r %= m;
        if( bits[i] ) { r *= b; if( m > 0 ) r %= m; }
    }
    return r;
}


main()
{
    int base, exp, mod,sum=0;
    long long int y=1,temp;

  
    scanf("%d",&base);

    
    scanf("%d",&exp);

    y= powmod(base,exp,0);
    
    temp=y;
   while(temp>0)
   {
                sum=sum+(temp%10);
                temp=temp/10;}
    cout<<y<<endl;cout<<sum;
    getchar();
    getchar();

    
   
}
