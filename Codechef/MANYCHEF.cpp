#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

main()
{
      int tst; cin>>tst; while(tst--){
 
 string s;
 cin>>s;
 int i,j,slen=s.length();
 vector<bool>perm;
 perm.clear();
 for(i=0;i<slen;i++) if(s[i]=='?') perm.push_back(0); else perm.push_back(1);
 
 for(i=0;i<slen-3;i++)
 {
    string f="";
    
    if(perm[i]==0) f+='C'; else f+=s[i];
     if(perm[i+1]==0) f+='H'; else f+=s[i+1];
      if(perm[i+2]==0) f+='E'; else f+=s[i+2];
       if(perm[i+3]==0) f+='F'; else f+=s[i+3];
     
     if(f=="CHEF"){
                   s[i]='C';
                   s[i+1]='H';
                   s[i+2]='E';
                   s[i+3]='F';
                   }
}//for
   
for(i=0;i<slen-3;i++)
 {
    string f="";
    f+=s[i];
    f+=s[i+1];
    f+=s[i+2];
    f+=s[i+3];
     
     if(f=="CHEF"){
                   perm[i]=1;
                   perm[i+1]=1;
                   perm[i+2]=1;
                   perm[i+3]=1;
                   }
}//for  

  
   for(i=0;i<slen;i++) if(!perm[i]&&!perm[i+1]&&!perm[i+2]&&!perm[i+3]) {s[i]='C'; s[i+1]='H';s[i+2]='E';s[i+3]='F';perm[i]=1;perm[i+1]=1;perm[i+2]=1;perm[i+3]=1;}
                         else if(!perm[i]) s[i]='A';
                   
   
   cout<<s<<endl;
   
}//tst
}//main 

