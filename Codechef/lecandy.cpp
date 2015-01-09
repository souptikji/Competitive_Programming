#include<iostream>
using namespace std;

main()
{
      int tst;cin>>tst;
      while(tst--)
      {
         int n,c,val,tot;
         cin>>n>>c;
         tot=0;
         while(n--) {cin>>val; tot+=val;}
         if(tot<=c) cout<<"Yes"<<endl;
         else cout<<"No"<<endl;
         }
}
         
