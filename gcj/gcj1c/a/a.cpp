#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      int tst,t; cin>>tst;
      for(t=1;t<=tst;t++)
      {  
        //cout<<"New case"<<endl; cout<<"\ndual path from "<<j<<" to "<<val-1;
         int n,i,j,k,m,val;
         bool done;
         cin>>n;
         int a[n+1][n+1];
         for(i=0;i<=n;i++) for(j=0;j<=n;j++) a[i][j]=0;
         done=0;
         for(i=1;i<=n;i++)
         {
            cin>>m;
            for(k=0;k<m;k++){
                        cin>>val;
                        //if done
                        {
                        a[i][val]++; 
                        
                        for(j=1;j<=n;j++) {if(a[j][i]>0) a[j][val]++;
                                           }
                                           }}
                                           }//end of whilef
                                           
            for(i=1;i<=n;i++) 
            { if(done==1) break;
              for(j=1;j<=n;j++) if(a[i][j]>=2) {done=1; break;}}
                                           
            
            if(done==1) cout<<"Case #"<<t<<": Yes"<<endl;
            else if(done==0)  cout<<"Case #"<<t<<": No"<<endl;
            }//end of tstcase
            }//end
                         
