#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      int tst=5;
      while(tst--){
      int n,i,j,count,acn,num;
      vector<int>v;
      vector<int>v1;
      vector<int>cnt;
      cin>>n;
      for(i=0;i<n;i++) {cin>>num;v.push_back(num);}
      sort(v.begin(),v.end());
      //duplicates routine
      i=0;acn=0;
      while(i<n)
      { 
                count=0;
               
                num=v[i];
                acn++;
                
                v1.push_back(num);j=i;
                while(v[j]==num) {count++; j++;}
                cnt.push_back(count);
                i=j;
                }
      //end of duplicates routine
      
      for(i=0;i<n;i++) cout<<" "<<v[i];
      cout<<endl;
      for(i=0;i<acn;i++) cout<<" "<<v1[i];
      cout<<endl;
      for(i=0;i<acn;i++) cout<<" "<<cnt[i];
      cout<<endl;
      
      }}
