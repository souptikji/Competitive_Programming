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
    double p,z=10000.00000,ans,x,a0,a1,prob;
    cin>>prob;
    p=1.00000-prob;
    if(prob<=0.50000) x=0.00000; else x=10000.00000;
    a0= prob*((2.000000*x)*(1.00000-prob)+(x));
    a1=p*(2.00000*(z-x)*(1.00000-p)+(z-x));
    ans= (a0>=a1)?a0:a1;
    cout<<ans<<endl;
    //printf("%.5f\n",ans);
    }
}
