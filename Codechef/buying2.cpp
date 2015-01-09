#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

main()
{
      int tst;cin>>tst;while(tst--){

    int n,x,i,sum=0,sz,ns,val,num;
    bool adeq=1;
    vector<int>v;
    cin>>n>>x;
    for(i=0;i<n;i++) {cin>>val; v.push_back(val);sum+=val;}
    if(sum%x==0) {cout<<sum/x<<endl; }
    else
    {
       sort(v.begin(),v.end());
       sz=v.size(); num=sum/x;
       for(i=0;i<sz;i++){ns=sum-v[i]; ns/=x; if(ns==num) {adeq=0; break;} }
       if(adeq) cout<<num<<endl; else cout<<"-1"<<endl;
       }//else
       }//tsts
       }//main
