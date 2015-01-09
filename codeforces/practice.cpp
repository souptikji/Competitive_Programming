#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

main()
{
         vector< vector<int> >v(26);
      char c;bool exist;
      int i=0,it,last,sz,j,len;
      for(j=0;j<26;j++) v[j].clear();
      string s;
      cin>>s;
      len=s.length();
      
      for(i=0;i<len;i++){ v[s[i]-'a'].push_back(i); }
      
     last=-1;
      
      for(i=25;i>=0;i--)
      { exist=0;
        sz=v[i].size();
     //  printf("for %c, size is %d ",'a'+i,sz);
      if(sz){
        for(it=0;it<sz;it++) if(v[i][it]>last){ printf("%c",'a'+i); exist=1;}
        if(exist)last=v[i][sz-1];}
     // cout<<"\nlast is "<<last<<endl;
        }
      // getchar();
       //getchar();
        }
        
       
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
       
