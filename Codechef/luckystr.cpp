#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      int n,k,i,j,slen,flen,i1,j1;
      bool found;
      vector<string>fav;
      vector<string>lucky;
      string s,f;
      cin>>k>>n;
      for(i=0;i<k;i++){ cin>>s; fav.push_back(s);}
      sort(fav.begin(),fav.end());
      
      
      for(i1=0;i1<n;i1++)
      {  cin>>s;
         found=0;
         
       slen=s.length();
       if(slen>=47) cout<<"Good"<<endl;
       else {
        for(j1=0;j1<k;j1++)
        {
          
           f=fav[j1];
           flen=f.length();
            if(flen>slen) continue;
           if(flen<=slen){
                           for(i = 0; i < slen; i++) {
                           for(j = 0; j < flen && i + j <slen; j++) 
                           if(s[i + j] != f[j]) break;
      // mismatch found, break the inner loop
                           if(j == flen) {found=1; break;}}}
       if(found) break;}//end of iterating over all patterns
         if(found) cout<<"Good"<<endl;
         else cout<<"Bad"<<endl;
         }}
         
         }//end of prog
      
      
      
