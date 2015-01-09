#include<iostream>
#include<string>
using namespace std;

main()
{
      int tst; cin>>tst;
      while(tst--)
      {
         string s1,s2;
         int d[26];
         int i; bool yes;
         cin>>s1>>s2;
        // cout<<s1<<endl<<s2<<endl;
        
       // if(s1.size()==s2.size())
        {
         for(i=0;i<26;i++) d[i]=0;
         for(i=0;s1[i]!='\0';i++) if(s1[i]>='a' && s1[i]<='z') d[s1[i]-'a']++;
         //for(i=0;i<26;i++) cout<<d[i]<<" ";
         
         for(i=0;s1[i]!='\0';i++) if(s2[i]>='a' && s2[i]<='z') d[s2[i]-'a']--;
          //for(i=0;i<26;i++) cout<<d[i]<<" ";
         yes=1;
         for(i=0;i<26;i++) if(d[i]!=0) yes=0;
         if(!yes) cout<<"NO"<<endl;
         else cout<<"YES"<<endl;}
         
      //   
//         else if((s1.size()%s2.size())==0)
//         {
//            int fac = s1.size()/s2.size();
//               for(i=0;s1[i]!='\0';i++) if(s1[i]>='a' && s1[i]<='z') d[s1[i]-'a']++;
//         
//         for(i=0;s1[i]!='\0';i++) if(s2[i]>='a' && s2[i]<='z') d[s2[i]-'a']--;
              
                                 
}}
