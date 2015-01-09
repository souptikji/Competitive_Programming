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
                    string s;
                    cin>>s;
                    int l=s.length(),i,j;
                    int arr[26],brr[26];
                    for(j=0;j<26;j++) { arr[j]=0; brr[j]=0; }
                   for(i=0;i<l/2;i++) arr[s[i]-'a']++;
                    if(l%2) i++;
                    for(j=i;j<l;j++) brr[s[j]-'a']++;
                    int sum=0;
                    for(i=0;i<26;i++) sum+=arr[i]^brr[i];
                    if(sum) cout<<"NO"<<endl;
                    else cout<<"YES"<<endl;
                    }//tst
                    }//main
