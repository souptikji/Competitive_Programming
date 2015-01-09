#include<iostream>
#include<string>
using namespace std;


main()
{
      int tst;
      cin>>tst;
      while(tst--)
      {
                  string s,temp;
                  int n,ans=0,i;
                  cin>>n>>s;
                  temp=s;
                  for(i=0;i<n;i++) { if(s[i]=='1') { if(i-1>=0)temp[i-1]='1'; if(i+1<n) temp[i+1]='1';} }
                //  cout<<temp<<endl;
                  for(i=0;i<n;i++) if(temp[i]=='0') ans++;
                  cout<<ans<<endl;
                  }}
