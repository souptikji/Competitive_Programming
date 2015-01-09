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
    while(tst--)
    {

        long long int n,k,ans,rem;
        cin>>n>>k;
        if(k==0&&n==0) {ans=0; rem=0;}
        else if(k==0) {ans=0;rem=0;}
        else if(n==0) {ans=0; rem=k;}

        else
        {
            ans=n/k;
            rem=n%k;
        }

        cout<<ans<<" "<<rem<<endl;


    }
}
