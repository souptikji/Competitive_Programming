#include<iostream>
#include<string>
using namespace std;

main()
{
      string s;
      cin>>s;
      char c;
      cin>>c;
      int i,cnt=0;
      for(i=0;i<s.length();i++) if(s[i]==c) cnt++;
      cout<<cnt<<endl;
      }
