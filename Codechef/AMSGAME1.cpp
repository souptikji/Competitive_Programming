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
 using namespace std;
 
 int gcd(int a,int b)
{
    if(b==0) return a;
    return(gcd(b,a%b));
}

main()
{
      int tst; cin>>tst; while(tst--){
          int n,i;
          cin>>n;
          int a[n];
          for(i=0;i<n;i++) cin>>a[i];
          
          for(i=0;i<=n-2;i++)
          {
                          a[i+1]=gcd(a[i],a[i+1]);}
          
          cout<<a[n-1]<<endl;
          }}
          
