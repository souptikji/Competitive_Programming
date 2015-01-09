#include<iostream>
#include<vector>
using namespace std;

long long int mod(long long int num)
{
     if(num<0) return(-num);
     else return num;
     }
main()
{
      int t;
      cin>>t;
      while(t--)
      {
               long long int n,num,diff=1000000000,i;
                vector<long long int>a; a.clear();
                cin>>n;
                for(i=0;i<n;i++) {cin>>num; a.push_back(num);}
                sort(a.begin(),a.end());
                for(i=1;i<n;i++) if(mod(a[i]-a[i-1])<diff) diff= mod(a[i]-a[i-1]);
                cout<<diff<<endl;
                }}
