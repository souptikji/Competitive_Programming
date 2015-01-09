#include<iostream>
#include<string>
#include<vector>
using namespace std;

main()
{
      int t; cin>>t;
      vector<string>v;
      int cas,bit,i,j; string s; string bits;
      string str; bool ans,found=0;
      
      for(cas=0;cas<t;cas++)
      { bits="";
        for(bit=0;bit<t;bit++)
        {
          cin>>s;
          if(s=="NO") bits+='0';
          else bits+='1';
          }
          v.push_back(bits);}
      
      for(i=0;i<t;i++)
      {
         if(v[i][i]!='1') continue;
          ans=1;  str=v[i];
         for(j=0;j<t;j++) ans&=~(str[j]^(str==v[j]));
         if(ans) {found=1;break;}
         }
      if(!found) for(j=0;j<t;j++) cout<<"NO"<<endl;
     else { for(j=0;j<t;j++) if(str[j]=='0') cout<<"NO"<<endl; else cout<<"YES"<<endl;}
      
      //for(cas=0;cas<t;cas++) {cout<<endl;cout<<v[cas];}
      
   //   system("pause");
      }
      
     
       
