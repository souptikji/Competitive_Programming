#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


main()
{
     // int tst=100; while(tst--) {
      
      int n,m,x,y,i,j,a,b,ans=-1 ; 
      cin>>n>>m; 
      if(n<3) cout<<ans<<endl;
      else{
      int sq[n-2][n-2];
      for(i=0;i<n-2;i++) for(j=0;j<n-2;j++) sq[i][j]=0;
       
      for(i=0;i<m;i++)
      {
         cin>>x>>y;
         if(ans==-1){
         x--;y--;
         if(x>=0 && x<n-2 && y>=0 && y<n-2) {sq[x][y]++; if(sq[x][y]>=9) {ans=i;}}
         if(x-1>=0 && x-1<n-2 && y>=0 && y<n-2) {sq[x-1][y]++; if(sq[x-1][y]>=9) {ans=i; }}
         if(x-2>=0 && x-2<n-2 && y>=0 && y<n-2) {sq[x-2][y]++; if(sq[x-2][y]>=9) {ans=i; }}
         
         if(x>=0 && x<n-2 && y-1>=0 && y-1<n-2) {sq[x][y-1]++; if(sq[x][y-1]>=9) {ans=i; }}
         if(x-1>=0 && x-1<n-2 && y-1>=0 && y-1<n-2) {sq[x-1][y-1]++; if(sq[x-1][y-1]>=9) {ans=i; }}
         if(x-2>=0 && x-2<n-2 && y-1>=0 && y-1<n-2) {sq[x-2][y-1]++; if(sq[x-2][y-1]>=9) {ans=i; }}
         
         if(x>=0 && x<n-2 && y-2>=0 && y-2<n-2) {sq[x][y-2]++; if(sq[x][y-2]>=9) {ans=i; }}
         if(x-1>=0 && x-1<n-2 && y-2>=0 && y-2<n-2) {sq[x-1][y-2]++; if(sq[x-1][y-2]>=9) {ans=i; }}
         if(x-2>=0 && x-2<n-2 && y-2>=0 && y-2<n-2) {sq[x-2][y-2]++; if(sq[x-2][y-2]>=9) {ans=i; }}
         
        // cout<<"Square now"<<endl;
         //for(a=0;a<n-2;a++) { for(b=0;b<n-2;b++) cout<<sq[a][b]<<" ";  cout<<endl;}
         //cout<<"Square now"<<endl;
         }
         }//end for
         if(ans!=-1)cout<<ans+1<<endl;
         else cout<<"-1"<<endl;
         }//end else
        // }//tst
         }//end
         
         
         
      
