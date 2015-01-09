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
       long long int n,m,t,i,v,x,y,q,incr=0,prevt=-1;
       cin>>n>>m;
       int arr[n];
       for(i=0;i<n;i++) cin>>arr[i];
       while(m--)
       {
                 cin>>t;
                 if(t==3) {cin>>q;  cout<<arr[q-1]+incr<<endl;}
                 else if(t==1) {cin>>v>>x; arr[v-1]=x-incr;}
                 else if(t==2) {cin>>y; incr+=y;}
                 }//m
                 
                 }//main
       
