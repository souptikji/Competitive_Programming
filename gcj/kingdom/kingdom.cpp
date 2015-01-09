#include<iostream>
using namespace std;

main()
{
      int tst,t;
      cin>>tst;
      for(t=1;t<=tst;t++)
      {
           //INITIAL AND INPUT
           int n; cin>>n;
           int i,j,starsreq1[n], starsreq2[n], is1comp[n], is2comp[n],stars=0, cnt=0, num2done=0,indexmin;
           for(i=0;i<n;i++) {cin>>starsreq1[i]>>starsreq2[i]; is1comp[i]=0; is2comp[i]=0;}
           //END OF INITIAL & INPUT
           
           //FINDING TOO BAD CASE
                indexmin=0; bool toobad=0;
                for(i=1;i<n;i++) if(starsreq2[i]<starsreq2[indexmin]) indexmin=i;
                if(starsreq2[indexmin]>0)
                {indexmin=0; 
                 for(i=1;i<n;i++) if(starsreq1[i]<starsreq1[indexmin]) indexmin=i;
                 if(starsreq1[indexmin]>0) {cout<<"Case #"<<t<<": Too Bad"<<endl;toobad=1; }}
                 //END OF FINDING TOO BAD CASE
                 cout<<"\nNot too bad\n";
           
           //START COMPUTATION
           while(num2done<n && !toobad)
           {
                //FINDING MINIMUM IN 2* WITH NO 1*COMPLETE AND 2*COMPLETE
                indexmin=0;
                for(i=1;i<n;i++) if( (starsreq2[i]<=starsreq2[indexmin]) && (is1comp[i]==0) && (is2comp[i]==0) ) {indexmin=i;} cout<<"\nindexmin in starsreq2 with no 2* or 1* is"<<indexmin<<endl;
                
                if(starsreq2[indexmin]<=stars && (is1comp[indexmin]==0) && (is2comp[indexmin]==0)) //1 min found such that 1* and 2* are both not touched
                {stars+=2;
                 is2comp[indexmin]=1;
                 cnt++; starsreq2[indexmin]=3000;
                 num2done++;
                 cout<<"Done with 2star level of level"<<indexmin<<" where stars_till_now="<<stars<<" and cnt"<<cnt<<" and num2done"<<num2done<<endl;}
                // END OF FINDING MINIMUM IN 2* WITH NO 1*COMPLETE AND 2*COMPLETE
                
                
                else{ //no min found such that 1* and 2* both are incomplete
                cout<<" oops ";
                //FINDING MINIMUM IN 2* WITH NO 1*COMPLETE BUT WITH 2*COMPLETE
                indexmin=0; 
                for(i=1;i<n;i++) if( (starsreq2[i]<=starsreq2[indexmin]) && !(is2comp[i]) ) {indexmin=i;} cout<<"\nindexmin in starsreq2 with no 2* but 1* is"<<indexmin<<endl;
                if(starsreq2[indexmin]<=stars && !(is2comp[indexmin])) //1 min found such that ONLY 2* not touched
                {stars+=1;
                 is2comp[indexmin]=1;
                 cnt++; starsreq2[indexmin]=3000;
                 num2done++;
                  cout<<"Done with 2star level but 1*complete of level"<<indexmin<<" where stars_till_now="<<stars<<" and cnt"<<cnt<<" and num2done"<<num2done<<endl;}
                 //END OF FINDING MINIMUM IN 2* WITH NO 1*COMPLETE BUT WITH 2*COMPLETE
                 
                               else//search in 1* only
                                   {cout<<" oops ";
                                    indexmin=0; 
                                    for(i=1;i<n;i++) if( (starsreq1[i]<starsreq1[indexmin]) && !(is1comp[i]) && !(is2comp[i]) ) {indexmin=i; } cout<<"\nindexmin in starsreq1 with no 2* and no 1* is"<<indexmin<<endl;
                                    if(starsreq1[indexmin]<=stars && !(is1comp[indexmin]) && !(is2comp[indexmin])) {stars++; cnt++; is1comp[indexmin]=1;starsreq1[indexmin]=3000; cout<<"Done with 1star level of level"<<indexmin<<" where stars_till_now="<<stars<<" and cnt"<<cnt<<" and num2done"<<num2done<<endl;}
                                    else {cout<<"\nye kya hua"; break;}   
                                    }//end of search in 1* only
                                    
                    }//END OF outer ELSE 
                    
                    }//END OF COMPUTATIONS
                    
                    if(!toobad) cout<<"Case #"<<t<<": "<<cnt<<endl;
                    
                    }//end of tstcase
                    }//end
                 
            
               
