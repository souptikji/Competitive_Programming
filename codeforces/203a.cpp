#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


main()
{
    //  int tst=100; while(tst--) {
      
      int x,t,a,b,da,db,t1,t2,va,vb ;
      bool pos=0;
      cin>>x>>t>>a>>b>>da>>db;
      
      for(t1=0;t1<=t && !pos; t1++)  
      for(t2=0;t2<=t && !pos; t2++) 
      {
          if(t1==t) va=0; else va=a-((t1)*da);
          if(t2==t) vb=0; else vb=b-((t2)*db);
        //  cout<<"va"<<va<<" and vb"<<vb<<endl;
          if(va+vb==x) {pos=1; break;}
          }
          
          if(pos) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
          
        //  }//tst
          }//end  
      
