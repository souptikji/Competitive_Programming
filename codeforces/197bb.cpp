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

    int n,m,i,curr,work=0,dif;
    cin>>n>>m;
    int a[m];
    for(i=0;i<m;i++) cin>>a[i];

    curr=1;

    for(i=0;i<m;i++)
    {
        dif=(a[i]-curr);
        if(dif<0) dif+=n;
        curr=a[i];
        //if(dif<0) dif=n+dif;
      // cout<<"dif"<<dif<<endl;
        work+=dif;

    }

    cout<<work<<endl;


}
