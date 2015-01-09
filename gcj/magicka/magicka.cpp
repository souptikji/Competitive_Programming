#include<iostream>
#include<vector>
#include<stack>
using namespace std;

main()
{
      int tst,cas,i,j,k,c,d,n,found; 
      char ch,tops;
      cin>>tst;
      for(cas=1;cas<=tst;cas++)
      {
        cin>>c; char e1[c],e2[c],e3[c];
        for(i=0;i<c;i++) cin>>e1[i]>>e2[i]>>e3[i];
        
        cin>>d; char o1[d],o2[d];
        for(i=0;i<d;i++) cin>>o1[i]>>o2[i];
        
        cin>>n; 
        stack<char>s; s.push('0');
        bool des[27]={0};
        for(j=0;j<n;j++)
        {
          cin>>ch;
          found=0;
          
          for(i=0;i<c;i++){ tops=s.top();
                            if((e1[i]==ch && e2[i]==tops)||(e2[i]==ch && e1[i]==tops))//comb possible
                            {
                              //tops ka des ko zero kro
                              for(k=0;k<d;k++) {  if(o1[k]==tops) des[o2[k]-'A']=0; else if(o2[k]==tops) des[o1[k]-'A']=0;}
                              s.pop(); found=1; s.push(e3[i]);}}//end of for
          
          if(found==0) {s.push(ch);
                        for(k=0;k<d;k++) {  if(o1[k]==ch) des[o2[k]-'A']=1; else if(o2[k]==ch) des[o1[k]-'A']=1;}}
                        
         if(des[s.top()-'A']==1) { while(!s.empty()) {tops=s.top();
                                                      for(k=0;k<d;k++) {  if(o1[k]==tops) des[o2[k]-'A']=0; else if(o2[k]==tops) des[o1[k]-'A']=0;} s.pop();}
                                    s.push('0');}
         }//take next symbol
         //Case #4: [Z, E, R, A]
         cout<<"Case #"<<cas<<": [";
         vector<char>v;
         while(!s.empty()) {v.push_back(s.top()); s.pop();}
         for(k=v.size()-2;k>0;k--) cout<<v[k]<<", ";
        if(v[0]!='0') cout<<v[0];cout<<"]"<<endl;
         }//end of case
         }//end
