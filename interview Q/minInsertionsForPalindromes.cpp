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


int minInsert(string s,int i,int j){

   if(i==j) return 0;
   if(i==j-1) return(s[i]==s[j])
   if(s[i]==s[j]) return minInsert(s,i+1,j-1);
   return (1+ min(minInsert(s,i,j-1),minInsert(s,i+1,j)));
   }





main()
{

    int tst;
    cin>>tst;
    while(tst--){
    string s;
    cin>>s;
    cout<<minInsert(s,0,s.length()-1)<<endl;
    }
}
