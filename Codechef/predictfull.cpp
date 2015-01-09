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

main()
{
    int tst;
    cin>>tst;
    while(tst--){
    double prob,ans,x=0.00000,z=10000.00000,p,a1,a0,max=0.00000,xmax=0.00000;
   scanf("%lf",&prob);
    p=1.00000-prob;

   while(x<=z)
   {
    a0= prob*((2.000000*x)*(1.00000-prob)+(x));
    a1=p*(2.00000*(z-x)*(1.00000-p)+(z-x));
    ans= (a0>=a1)?a0:a1;
    if(ans>max) {
        max=ans;
        xmax=x;
    }
    x+=1.00000;

   }

   cout<<max<<" "<<xmax<<endl;

    }
}
