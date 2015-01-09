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
 
 
bool good(vector < int > h, int x) { 
		int prev = 0, n = h.size();
		

		for(int i=0;i<=n-1;i++) {
			//if we can make tree[i] higher than previous one
			if (h[i] + x <= prev) return false;
			//reset the value of prev for the next step
			prev = max(prev + 1, h[i] - x);
		}
		return true;
	}
 

  int minLevel(vector <int> heights) {
    int left=-1;
    int right=1000000000;
    while(right>left+1){
      int mid=(left+right)/2;
      if(good(heights,mid)) right=mid;
      else left=mid;
    }
    return right;
  }
  
main()
{
      int tst;
      cin>>tst;
      while(tst--)
      {
                  int n,i,val;
                  cin>>n;
                  vector<int>v;
                  v.clear();
                  for(i=0;i<n;i++) {cin>>val; v.push_back(val);}
                  cout<<minLevel(v)<<endl;
                  }}
                  

 
