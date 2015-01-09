#include<iostream>
using namespace std;

main()
{
      int a[150],n,age,i,q,x;
      bool ans;
      
      
      for(i=0;i<150;i++) a[i]=0;
      cout<<"\nHow mny ppl? ";
      cin>>n;
      for(i=0;i<n;i++) {cin>>age; a[age]++;}
      //cout<<"Age-------no."<<endl;
//        for(i=0;i<150;i++) cout<<i<<"---------"<<a[i]<<endl;
      cout<<"\nNo. of queries? ";
      cin>>q;
      for(x=0;x<150;x++){cout<<x<<" ->";
                  ans=false;
                  for(i=0;i<x;i++) if(a[i]&&a[x-i]&&(i!=x-i)) {ans=true; break;}
                  if(ans) cout<<"true"<<endl;
                  else cout<<"false"<<endl;
                  }//end of q
                  
                  cin>>q;
                  }
                  
      
      
