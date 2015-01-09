#include<iostream>
#include<string>
using namespace std;

void permute(string s,int f,int l)
{
     if(f<0||l>=s.length()) return;
     
     if(f==l) {cout<<s[f]<<endl; return;}
     if(l==f+1) {
                cout<<s[f]<<s[l]<<endl;
                if(s[f]!=s[l]) cout<<s[l]<<s[f]<<endl; }
     else
     { cout<<s[f]; permute(s,f+1,l); cout<<endl;
       permute(s,f,l-1); cout<<s[l]<<endl;
       }
}

main()
{
      int tst; cin>>tst;
      while(tst--)
      {
        string s;
        cin>>s;
        permute(s,0,s.length()-1);
        }
}
     
