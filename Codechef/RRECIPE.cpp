#include<iostream>
#include<string>
using namespace std;

main()
{
      int t; cin>>t;
      while(t--)
      {
                long long int i=0,j,cnt=1;
                string s; bool error=0;
                cin>>s; j=s.length()-1;
                
                while(i<j)
                {
                          if(s[i]=='?' && s[j]!='?'||s[i]!='?' && s[j]=='?') ;
                          else if(s[i]=='?' && s[j]=='?') cnt=(cnt*26)%10000009;
                          else if(s[i]!='?' && s[j]!='?'&& s[i]!=s[j]) {error=1; break;}
                          i++; j--;
                          }
                
                if(i==j && s[i]=='?') cnt=(cnt*26)%10000009;
                if(error) cout<<"0\n";
                else cout<<cnt%10000009<<endl;
                }}
                          
                          
