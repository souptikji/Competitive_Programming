#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

main()
{
         vector< vector<int> >v(26);
      char c;
      int i=0,it,last,sz,j;
      for(j=0;j<26;j++) v[j].clear();
      
      while((c=getchar())!='\n'){ v[c-'a'].push_back(i); i++;}
      
     last=0;
      
      for(i=25;i>=0;i--)
      {
        sz=v[i].size(); if(sz==0) continue;
      //  printf("for %c, size is %d ",'a'+i,sz);
        for(it=0;it<sz;it++) if(v[i][it]>=last) printf("%c",'a'+i);
        last=v[i][sz-1];
      // cout<<"\nlast is "<<last<<endl;
        }
       getchar();
        }
        
       
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
       
