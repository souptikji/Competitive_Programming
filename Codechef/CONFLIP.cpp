#include<iostream>
using namespace std;

main()
{
      int t; cin>>t; while(t--){
      
      
      int g,i,n,q,swap,unswap;
      cin>>g;
      while(g--){
                 cin>>i>>n>>q;
                 if(n%2) swap=n/2+1;  else swap=n/2;
                 unswap=n-swap;
                 if(i==q) cout<<unswap<<endl;
                 else cout<<swap<<endl;
                 }//g
                 }//tst
                 }//end
