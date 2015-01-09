#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<vector>
#include<string>
using namespace std;

main()
{
      int t; cin>>t; while(t--){
      int i,rlen,slen;
      string a,b;
      string r="",s="";
      cin>>a>>b;
      rlen=a.length(); slen=b.length(); 
      int ar[26],br[26];
      
      for(i=0;i<26;i++) ar[i]=0;
      for(i=0;i<rlen;i++)ar[a[i]-'a']++;
      for(i=0;i<26;i++) if(ar[i]) r+=(char)(i+'a');
      //cout<<"R is :"<<r<<endl;
      
      for(i=0;i<26;i++) br[i]=0;
      for(i=0;i<slen;i++)br[b[i]-'a']++;
      for(i=0;i<26;i++) if(br[i]) s+=(char)(i+'a');
      //cout<<"S is :"<<s<<endl;
      
      bool corr=1;
      for(i=0;i<26;i++) if(ar[i]!=br[i]) corr=0;
      
      if(corr||r!=s) cout<<"YES"<<endl;else cout<<"NO"<<endl;
      }
      }
      
      
      
