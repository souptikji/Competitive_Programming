#include<iostream>
#include<string>
using namespace std;

void printt(string orig)
{
     int i,j,len=orig.length();
     string out="";
     for(i=0;i<len;i++)
     {out=""; out+=orig[i]; cout<<out<<endl;
     for(j=i+1;j<len;j++)
     {
       out+=orig[j];
       cout<<out<<endl;
       }}
}

main()
{
      int tst=100;
      while(tst--)
      {
                  string s;
                  cin>>s;
                  printt(s);
                  }}
