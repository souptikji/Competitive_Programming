#include<iostream>
#include<string>
using namespace std;

string isValid(string name)
{
  int len,alpha,i,a[26];
  len=name.length();
  alpha=0;
  for(i=0;i<26;i++) a[i]=0;
  for(i=0;i<len;i++) {if(name[i]<'a'||name[i]>'z') return("NO");
                      else a[name[i]-'a']++;
                      alpha++;
                      if(alpha>8) return("NO");}
  
  if(
    (a[0]==2 && a['e'-'a']==0 && a['i'-'a']==0 && a['o'-'a']==0 && a['u'-'a']==0)
    ||(a[0]==0 && a['e'-'a']==2 && a['i'-'a']==0 && a['o'-'a']==0 && a['u'-'a']==0)
    ||(a[0]==0 && a['e'-'a']==0 && a['i'-'a']==2 && a['o'-'a']==0 && a['u'-'a']==0)
    ||(a[0]==0 && a['e'-'a']==0 && a['i'-'a']==0 && a['o'-'a']==2 && a['u'-'a']==0)
    ||(a[0]==0 && a['e'-'a']==0 && a['i'-'a']==0 && a['o'-'a']==0 && a['u'-'a']==2)
    ) return("YES");
    
    else return("NO");
}

main()
{
      int tst=15;
      while(tst--)
      {
                  string s;
                  cin>>s;
                  cout<<isValid(s)<<" end"<<endl;
                  }
}
    
   
   
