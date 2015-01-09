#include<iostream>
#include<vector>
#include<string>
using namespace std;


main()
{
     
                  string str,ans="";
                  char ch;
                  cin>>str;
                  int len=str.length(),i,tim;
                  int ar[26];
                  for(i=0;i<26;i++) ar[i]=0;
                  
                  for(i=0;i<len;i++) ar[str[i]-'a']++;
                  for(i=25;i>=0;i--) if(ar[i]) {ch=(char)(i+'a');tim=ar[i];break;}
                  for(i=0;i<tim;i++) ans+=ch;
                  cout<<ans<<endl;
                 
                  }//end
                  
