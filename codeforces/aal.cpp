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
 
 main()
 {
       int i,n,ans=0,j;
       cin>>n;
       int a[n][2];
       for(i=0;i<n;i++) cin>>a[i][0]>>a[i][1]; 
       for(i=0;i<n;i++) { for(j=0;j<n;j++){
                                            if(i!=j) {if(a[i][1]==a[j][0]) a[j][0]=0;}}}
       
       for(i=0;i<n;i++) if(a[i][0]!=0) ans++;
       cout<<ans<<endl;
       }
                         
