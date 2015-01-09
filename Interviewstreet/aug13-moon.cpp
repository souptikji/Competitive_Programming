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

int root(int node,int parent[])
{
    while(parent[node]!=node) node=parent[node];
    return node;
}
main()
{
    long long int n,t,i,v1,v2,sum=0,j,r1,r2;
    cin>>n>>t;
    int parent[n],numchildren[n];
    for(i=0;i<n;i++)
    {
        parent[i]=i;
        numchildren[i]=1;// numchildren[i]= if i is the root to uske kitne children hai.
    }

    for(i=0;i<t;i++)
    {
        cin>>v1>>v2;
        r1=root(v1,parent);
        r2=root(v2,parent);
        if(r1==r2) continue;
        if(numchildren[r2]>numchildren[r1])
        {
            r1^=r2;
            r2^=r1;
            r1^=r2;
        }
        parent[r2]=r1;
        numchildren[r1]+=numchildren[r2];
        numchildren[r2]=0;
            }

    vector<int>v;

    for(i=0;i<n;i++)
    {
        if(numchildren[i]) v.push_back(numchildren[i]);
    }

    long long int sz=v.size();
    for(i=0;i<sz;i++)
    {
        for(j=i+1;j<sz;j++)
        {
            sum+=v[i]*v[j];
        }
    }
    cout<<sum<<endl;





    }//code





