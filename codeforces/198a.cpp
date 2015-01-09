#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

long long int gcd(long long int a,long long int b)
{
    if(b == 0)
       return a;
    else
       return gcd(b, a%b);
}

main()
{

       long long int i,a,b,x,y,start,div,cnt=0,end,j;
       cin>>x>>y>>a>>b;
       div=x*y/gcd(x,y);
       //cout<<"div"<<div<<endl;
       for(i=a;i<=b;++i) if(i%div==0||i==b) break;

     //cout<<"i is"<<i<<endl;

           if(i%div!=0) cnt=0;

              else
              {

              start=i;

           for( j=b;j>=a;--j) if(j%div==0) break;
           end=j;
         // cout<<start<<" "<<end<<endl;
           cnt=(end-start)/div + 1;

              }

 cout<<cnt<<endl;


}//main
