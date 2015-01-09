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
      //int tst; cin>>tst; while(tst--){
      
      char a[4][4];
      int i,j;
      
      for(i=0;i<4;i++) for(j=0;j<4;j++) cin>>a[i][j];
      bool ans=false;
      
      for(i=0;i<4;i++) for(j=0;j<4;j++)
      {
         if(i==3||j==3) continue;
         
         int sum=0;
         if(a[i][j]=='#') sum++;
         if(a[i+1][j]=='#') sum++;
         if(a[i][j+1]=='#') sum++;
         if(a[i+1][j+1]=='#') sum++;
         
         if(sum==0||sum==1||sum==3||sum==4) {ans=true; break;}
         }
      
      if(ans) cout<<"YES\n";
      else cout<<"NO"<<endl;
      }
      
      
      
