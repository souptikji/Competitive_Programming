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
    stack<string>st;
    while(cin>>s)
    {
        reverse(s.begin(),s.end());
        st.push(s);
    }

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}
