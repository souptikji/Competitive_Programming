#include<iostream>
using namespace std;

main()
{
      int t,tst; cin>>t;
      for(tst=1;tst<=t;tst++)
      {
         int n,l,h,freq,i,ans,done;
         cin>>n>>l>>h;
         int val[n];
         for(i=0;i<n;i++) cin>>val[i];
         
         done=0;
         for(freq=l;freq<=h;freq++)
         { ans=1;
           for(i=0;i<n;i++) if(!(freq%val[i]==0 || val[i]%freq==0)) ans=0 ;
           if(ans==1) {done=1; break;}}
         
         if(!done) cout<<"Case #"<<tst<<": NO"<<endl;  
         else cout<<"Case #"<<tst<<": "<<freq<<endl;
         }//tstcase
         }//end
         
         
           
