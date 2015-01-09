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

bool copr[778][778];

int gcd(int a,int b)
{
    if(b==0) return a;
    return(gcd(b,a%b));
}

bool coprime(int i, int j){
     if(gcd(i,j)==1) return 1;
     return 0;
     }
     

main()
{
      int i,j;
      for(i=1;i<=777;i++) for(j=1;j<=777;j++) if(coprime(i,j)) copr[i][j]=1;
      for(i=1;i<=17;i++) 
      {
                         cout<<endl;
                         for(j=1;j<=17;j++) cout<<copr[i][j]<<" ";
                         }
      getchar();
      getchar();
      }
      
