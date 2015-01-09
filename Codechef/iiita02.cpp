#include<iostream>
#include<vector>
using namespace std;

main()
{
      int tst;
      vector<int>v;
      vector<int>u;
      cin>>tst;
      while(tst--)
      {
        v.clear();
        u.clear();
        int i,b,diff=2,vsz,usz;
        cin>>b;
        
        for(i=2;i<=b;i+=diff) v.push_back(i);
       // for(i=0;i<v.size();i++) cout<<v[i]<<" ";
//        cout<<endl;
        
        while(v.size()>1)
        {
          diff++; u.clear(); vsz=v.size();
          for(i=0;i<vsz;i+=diff) v[i]=-1;
          for(i=0;i<vsz;i++) if(v[i]!=-1)u.push_back(v[i]);
          v.clear(); usz=u.size();
          for(i=0;i<usz;i++) v.push_back(u[i]);
          
          
          //for(i=0;i<v.size();i++) cout<<v[i]<<" ";
          //cout<<endl;
          }
          
          cout<<v[0]<<endl;
          }//tst
          }//end
          
        
