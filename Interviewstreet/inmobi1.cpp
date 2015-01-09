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
    int n,i,val;
    double avg=0.0;
    vector<int>v;
    vector<double>d;
    cin>>n;
    for(i=0;i<n;i++) { cin>>val; v.push_back(val); avg+=val;}
    avg/=n;
     for(i=0;i<n;i++) d.push_back((double)v[i]-avg);
     sort(d.begin(),d.end());
     for(i=0;i<n;i++) cout<<d[i]<<endl;
      for(i=0;i<n;i++) d[i]+=avg;
      cout<<"lalala";
       for(i=0;i<n;i++) cout<<d[i]<<endl;
    }
}
