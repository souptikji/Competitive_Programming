#include<iostream>
#include<string>
using namespace std;

string remove_und(string s)
{
  int i,len=s.length(); 
  bool out=0;
  string t="";
  for(i=0;i<len;i++) 
  {
     if(!out && s[i]=='_') {out=1; t+=s[i];}
     else if(s[i]!='_') {out=0; t+=s[i];}}
  
  while(*s++ == *t++);
  return s;
}


main()
{
      int tst=11;
      while(tst--)
      {
        string s;
        cin>>s;
        cout<<remove_und(s)<<endl;
        }
}
