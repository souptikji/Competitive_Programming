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
    string s;
    cin>>s;
    int a=0,b=0,c=0,sz=s.size(),i;
    for(i=0;i<sz;i++)
    {
        if(s[i]=='1') a++;
        else if(s[i]=='2') b++;
        else if(s[i]=='3') c++;
    }

   string x="";
    while(a--) {x+='1'; x+='+';}
    while(b--) {x+='2'; x+='+';}

    while(c--) {x+='3'; x+='+';}
    int xsz=x.size();
    for(i=0;i<xsz-1;i++) cout<<x[i];


}
