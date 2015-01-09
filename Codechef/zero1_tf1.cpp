#include<iostream>
#include<set>
using namespace std;

bool subsetSumExists(set<int> & set, int target) {
    if (set.isEmpty()) {
        return target == 0;
    } else {
        int element = set.first();
        set<int> rest = set - element;
        return subsetSumExists(rest, target)
        || (subsetSumExists(rest, target- element));
    }
}

main()
{
      int tst; cin>>tst; while(tst--)
      {
          int n,target,num,i;
          set<int>myset;
          cin>>n>>target;
          for(i=0;i<n;i++) {cin>>num; myset.insert(num);}
          cout<<subsetSumExists(myset,target)<<endl;
          }}
