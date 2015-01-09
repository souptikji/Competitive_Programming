#include<iostream>
#include<string>
using namespace std;

main()
{
      int tst; cin>>tst;
      while(tst--)
      {
                  int ans=0,len,i;
                  string str;
                  cin>>str;
                  len=str.length();
                  ans+=len; ans++;
                  char prev=str[0];
                  
                  for(i=1;i<len;i++)
                  if(str[i]<str[i-1]) ans+=(int)('z'-str[i-1]+1+str[i]-'a');
                  else ans+=str[i]-str[i-1];
                  
                  if(ans>11*len) cout<<"NO"<<endl; else cout<<"YES"<<endl;
                  }}
