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
         
         for(i=1;i<=n;i++)
         {
            cin>>m;
            for(k=0;k<m;k++){
                        cin>>val; a[i][val]++;}}
                        
                        
         done=0;
         for(i=1;i<=n;i++) for(j=1;j<=n;j++) for(k=1;k<n;k++)
                                              if((a[i][j]>=1) && (a[j][k]>=1) && i!=j && j!=k && i!=k){ a[i][k]++;
                                                                      if(a[i][k]>=2) {done=1; cout<<"yay ";}}
                        
            
             if(done)  cout<<"Case #"<<t<<": Yes"<<endl;       
            //if(done==1) cout<<"Case #"<<t<<": Yes"<<endl;
            if(done==0)  cout<<"Case #"<<t<<": No"<<endl;
            }//end of tstcase
            }//end
                         
