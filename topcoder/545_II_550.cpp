#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countInv(vector<int>v)
{
    int i,j,sz=v.size(),inv=0;
    for(i=0;i<sz;i++) for(j=i+1;j<sz;j++) if(v[i]>v[j]) inv++;
    return inv;
}

vector<int> convert_vector(string s)
{
  int i,len=s.length();
  vector<int>v;
  for(i=0;i<len;i++) v.push_back(s[i]-'a');
  return v;
}

string convert_string(vector<int>v)
{
       string s="";
       int i,sz=v.size();
       for(i=0;i<sz;i++) s+=(char)('a'+v[i]);
       return s;
}

void recovstr(int n, int minInv, string minStr)
{
       int i,minlen=minStr.length(),inv;
       bool occ[26];
       for(i=0;i<26;i++) occ[i]=0;
       
       for(i=0;i<minlen;i++) occ[minStr[i]-'a']++;
       for(i=0;i<n;i++) if(!occ[i]) minStr+=(char)('a'+i);
       cout<<"Original appended string is "<<minStr<<endl;
       
       vector<int>v=convert_vector(minStr);
       bool breakout=0;
       while((inv=countInv(v))<minInv)
       {
         cout<<"Smaller inv"<<inv<<" for "<<convert_string(v)<<endl;
         if(next_permutation (v.begin(),v.end())==false ) {breakout=1; break;}
         }
       
       if(breakout) cout<<"Permutation ended for string "<<convert_string(v)<<" at inversion"<<countInv(v)<<endl;
       else cout<<"Result reached for string "<<convert_string(v)<<" at inversion"<<countInv(v)<<endl;

// return(convert_string(v));
}
       




main()
{
      int tst=11,i,n,minInv;
      string s;
      while(tst--)
      {
        
        
        cin>>n>>minInv>>s;
        recovstr(n,minInv,s);
        
        }
}
