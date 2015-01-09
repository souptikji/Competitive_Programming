#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      int t,tst;
      vector<int>xp;
      vector<int>yp;
      vector<int>xn;
      vector<int>yn;
      cin>>tst;
      for(t=1;t<tst+1;t++)
      {
         //start decl
         int n,i,val,sum,indxp,indyp,xx,yy;
         xp.clear();  yp.clear();  xn.clear();  yn.clear();
         //end of decl
         
         //input
         cin>>n;
         for(i=0;i<n;i++) {cin>>val; if(val>=0)xp.push_back(val); else xn.push_back(val);}
         for(i=0;i<n;i++) {cin>>val; if(val>=0) yp.push_back(val);else yn.push_back(val);}
         //end of input 
         
         //sorting
         sort(xp.begin(),xp.end());   
         sort(xn.begin(),xn.end());   
         sort(yp.begin(),yp.end());   
         sort(yn.begin(),yn.end()); 
         //end of sorting
         
        //testing 1
//         cout<<"\nxp is "<<endl;
//         for(i=0;i<xp.size();i++) cout<<xp[i]<<" ";  
//          cout<<"\nxn is "<<endl;
//         for(i=0;i<xn.size();i++) cout<<xn[i]<<" ";  
//          cout<<"\nyp is "<<endl;
//         for(i=0;i<yp.size();i++) cout<<yp[i]<<" ";  
//          cout<<"\nyn is "<<endl;
//         for(i=0;i<yn.size();i++) cout<<yn[i]<<" "; 
         //end of testing 1
         
         //Exhaust xn
         sum=0;
         yy=yp.size()-1,xx=0;
         while(xx<xn.size())
         {
            sum+= xn[xx]*yp[yy];
            xx++; yy--;
            }
            indyp=yy;
         //end of exhausting xn
         
         //Exhaust yn
         xx=xp.size()-1,yy=0;
         while(yy<yn.size())
         {
            sum+= yn[yy]*xp[xx];
            xx--; yy++;
            }
            indxp=xx;
         //end of exhausting xn
         
         //testing 2
         //cout<<"\nsum uptil now is "<<sum<<endl;
//         cout<<"remaining elements of x are ";
//         for(i=0;i<=indxp;i++) cout<<xp[i]<<" ";
//         cout<<"remaining elements of y are ";
//         for(i=0;i<=indyp;i++) cout<<yp[i]<<" ";
         //end of testing 2
         
         xx=indxp;yy=0;
         while(xx>=0)
         { sum=sum+ xp[xx]*yp[yy];
           xx--;yy++;}
           
         cout<<"Case #"<<t<<": "<<sum<<endl;
        
         
         
          
         
         }//end of tstcase
         }
         
              
