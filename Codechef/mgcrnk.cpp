#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int maxx(int a,int b)
{
    if(a>b) return a;
    else return b;
}

main()
{
      int t; 
      cin>>t;
      while(t--)
      {
                int n,i,j,val;
                cin>>n;
                int ar[n][n],max[n][n];
                for(i=0;i<n;i++) for(j=0;j<n;j++) {cin>>val; ar[i][j]=val;}
                for(i=0;i<n;i++) for(j=0;j<n;j++)
                {
                                 if(i==0 && j==0) max[i][j]=0;
                                 else if(i==0) max[i][j]=ar[i][j]+max[i][j-1];
                                 else if(j==0) max[i][j]=ar[i][j]+max[i-1][j];
                                 else max[i][j]=ar[i][j]+maxx(max[i-1][j],max[i][j-1]);
                                 }
                
              //  for(i=0;i<n;i++) { cout<<"\n"; for(j=0;j<n;j++) cout<<max[i][j]<<" "; }
              
              float ans= (float)max[n-1][n-1]/(float)(2*n-3);
              if(ans>=0) printf("%f\n",ans);
              else cout<<"Bad Judges"<<endl;
                
                }//tsts
                
                }//main
                 
                
                
                
