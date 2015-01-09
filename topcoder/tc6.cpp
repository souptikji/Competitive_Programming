#include<vector>
#include<iostream>
#include<string>
using namespace std;

int maxFamily(vector <string> femaleCompatibility, vector <string> maleCompatibility, vector <string> siblingGroups)
{
    int sibg,child,otherchild,ma,pa,siblen,fem,male,c,max,cnt,i,num,thatchild;
    bool macommon=0,pacommon=0,remain,maco,paco;
    siblen=siblingGroups.size(); fem=femaleCompatibility.size(); male=maleCompatibility.size(); c=siblingGroups[0].length();
    int vis[c];
    
    max=0;
    for(sibg=0;sibg<siblen;sibg++)
    { cout<<"sibg"<<sibg<<" start"<<endl;
      for(i=0;i<c;i++) vis[i]=0;
      remain=0; cnt=0; num=0;maco=0;paco=0;
      for(child=0;child<c;child++)  if(siblingGroups[sibg][child]=='Y') {thatchild=child ; num++;}
      if(num==0) continue;
      if(num==1){  cout<<"num=1 and thatchild is"<<thatchild<<endl;
                   for(ma=0;ma<fem;ma++) if( femaleCompatibility[ma][thatchild]=='Y') maco=1; 
                   for(pa=0;pa<male;pa++) if( maleCompatibility[pa][thatchild]=='Y') paco=1; 
                   if(maco&&paco) cnt=1;
                   cout<<"cnt for num=1 is"<<cnt<<endl;}
      else {
       for(child=0;child<c;child++)
      { if(siblingGroups[sibg][child]=='Y')
         { 
            for(otherchild=child+1;otherchild<c;otherchild++)
             { if(siblingGroups[sibg][otherchild]=='Y')
                {
                   macommon=0;
                   for(ma=0;ma<fem;ma++) if( femaleCompatibility[ma][child]=='Y' && femaleCompatibility[ma][otherchild]=='Y') macommon=1;
                   pacommon=0;
                   for(pa=0;pa<male;pa++) if( maleCompatibility[pa][child]=='Y' && maleCompatibility[pa][otherchild]=='Y') pacommon=1;
                   if(macommon && pacommon) {vis[child]=1; vis[otherchild]=1;}
                   else remain=1;
                   
                   }}}}}
                   if(cnt>max) max=cnt;
                  else  if(!remain){ for(i=0;i<c;i++) cnt+=vis[i];
                               if(cnt>max) max=cnt; }
                  
                    cout<<"\ncnt is "<<cnt<<" and remain is"<<remain<<" and max is"<<max<<endl;
                   cout<<"\nsubg"<<sibg<<" end"<<endl;               
                   }

 if(max==0) return max;
else return (max+2);
}//end of fun







main()
{
      vector <string> femaleCompatibility ;
      vector <string> maleCompatibility; 
      vector <string> siblingGroups; 
      int tst=6;
      while(tst--)
      {
      
      int fem,male,sibg,i;
      string s;
      femaleCompatibility.clear();
      maleCompatibility.clear();
      siblingGroups.clear(); 
      
      cout<<"how many fem? ";
      cin>>fem;
      while(fem--) {cin>>s; femaleCompatibility.push_back(s); }
      
      cout<<"how many male? ";
      cin>>male;
      while(male--) {cin>>s; maleCompatibility.push_back(s); }
      
      cout<<"how many sibg? ";
      cin>>sibg;
      while(sibg--) {cin>>s; siblingGroups.push_back(s); }
      
      cout<<"\nsibg is ";
      for(i=0;i<siblingGroups.size();i++) cout<<siblingGroups[i]<<" ";
      
      cout<<"\nfem is ";
      for(i=0;i<femaleCompatibility.size();i++) cout<<femaleCompatibility[i]<<" ";
      
      cout<<"\nmale is ";
      for(i=0;i<maleCompatibility.size();i++) cout<<maleCompatibility[i]<<" ";
      
      
      
      
     cout<< maxFamily(femaleCompatibility,maleCompatibility,siblingGroups);
}}
      
      

      
      
