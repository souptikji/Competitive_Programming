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

bool fu(char c)
{
     if(c>='a' &&c<='z') return 1;
     else return 0;
     }
     
int main()
{
      int tst; scanf("%d",&tst); while(tst--){
 
 char s[2014];
 cin.getline(s,2014);
 int i,j,slen=0;
  //vector<bool>perm;
// perm.clear();
 
 for(i=0;s[i]!='\n'&&s[i];i++) slen++;
 // if(s[i]=='?') perm.push_back(0); else perm.push_back(1);
  
// cout<<"slen is"<<slen<<endl;
//cout<<"perm is ";
// for(i=0;i<slen;i++)cout<<perm[i];
 
 for(i=0;i<slen-3;i++)
 {
    string f="";
    bool chng=0;
    if(s[i]=='?'||fu(s[i])) {f+='C';chng++;} else f+=s[i];
     if(s[i+1]=='?'||fu(s[i+1])) {f+='H';chng++;} else f+=s[i+1];
      if(s[i+2]=='?'||fu(s[i+2])) {f+='E';chng++;} else f+=s[i+2];
       if(s[i+3]=='?'||fu(s[i+3])) {f+='F';chng++;} else f+=s[i+3];
     
     if(f=="CHEF" && chng){
                   s[i]='c';
                   s[i+1]='h';
                   s[i+2]='e';
                   s[i+3]='f';
                   }
}//for
   
for(i=0;i<slen-3;i++)
 {
    
     
     if(  (s[i]=='c'||s[i]=='C') && (s[i+1]=='h'||s[i+1]=='H') && (s[i+2]=='e'||s[i+2]=='E') && (s[i+3]=='f'||s[i+3]=='F') ){
                   s[i]='C';
                   s[i+1]='H';
                   s[i+2]='E';
                   s[i+3]='F';
                   }
}//for  

  
  for(i=0;i<slen;i++) if(!fu(s[i]) && !fu(s[i+1]) && !fu(s[i+2]) && !fu(s[i+3]) ) {s[i]='C'; s[i+1]='H';s[i+2]='E';s[i+3]='F';}
                         else if(!fu(s[i])) s[i]='A';
// printf("%s\n",s);
  cout<<s<<endl;
   
}//tst

return 0;
}//main 

