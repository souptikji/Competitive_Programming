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
 
 class SupermarketDiscount
 {
 public:
 int min(int a, int b, int c)
 {
     int min=a;
     if(b<a) min=b;
     if(c<a) min=c;
     return min;
     }
 
 public:
 int cost(int x, int y)
 {
     int ans=x+y;
     if(x>=50) ans-=10;
     if(y>=50) ans-=10;
     return ans;
     }
     
 public:
 int minAmount(vector<int>goods)
 {
     int a,b,c;
     a=goods[0]; b=goods[i]; c=goods[2];
     return( min (cost(a+b,c),cost(a+c,b),cost(b+c,a)), );
     }//f
};
