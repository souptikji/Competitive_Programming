#include<iostream>
#include<string>
using namespace std;

string removedup(string s)
{
       int i=0; string ans="";
       bool arr[26]; for(i=0;i<26;i++) arr[i]=0;
       for(i=0;s[i];i++) arr[s[i]-'a']=1;
       for(i=0;i<26;i++) if(arr[i]) ans+=(char)(i+'a');
       return ans;
       }

main()
{
      int tst=100;
      while(tst--)
      {
                  string s;
                  cin>>s;
                  cout<<removedup(s)<<endl;
                  }}
