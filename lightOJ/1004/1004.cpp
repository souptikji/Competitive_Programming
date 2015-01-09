#include<iostream>
using namespace std;

int maxx(int a,int b)
{
    if(a>b) return a;
    else return b;
}


main()
{
      int t,tst; cin>>tst;
      for(t=1;t<=tst;t++)
      {
         int n,i,j,row,col,max,am;
         cin>>n;
         int a[2*n][n+1],v[2*n][n+1];
         
         if(n==1){cin>>max;}
       else{  
         for(i=0;i<2*n;i++) for(j=0;j<n+1;j++) {a[i][j]=0;v[i][j]=0;}
         
         for(i=1;i<=n;i++) for(j=1;j<=i;j++) cin>>a[i][j];
         for(i=n+1;i<=2*n-1;i++) for(j=1;j<=2*n-i;j++) cin>>a[i][j];
         
         
        
        ////test1 
//         for(i=1;i<=n;i++) {cout<<endl; for(j=1;j<=i;j++) cout<<a[i][j]<<" ";}
//         for(i=n+1;i<=2*n-1;i++){cout<<endl; for(j=1;j<=2*n-i;j++) cout<<a[i][j]<<" ";}
//         //end of test1
         
         v[1][1]=a[1][1];
         for(row=1;row<n;row++)
         for(col=1;col<=row;col++)
         { 
           if(a[row+1][col]+v[row][col]>v[row+1][col]) v[row+1][col]=a[row+1][col]+v[row][col];
           if(a[row+1][col+1]+v[row][col]>v[row+1][col+1]) v[row+1][col+1]=a[row+1][col+1]+v[row][col];
           }
         
          v[2*n-1][1]=a[2*n-1][1];
         for(row=2*n-1;row>=n+2;row--)
         for(col=1;col<=2*n-row;col++)
         { 
           if(a[row-1][col]+v[row][col]>v[row-1][col]) v[row-1][col]=a[row-1][col]+v[row][col];
           if(a[row-1][col+1]+v[row][col]>v[row-1][col+1]) v[row-1][col+1]=a[row-1][col+1]+v[row][col];
           }
         
         // //test2 
//         for(i=1;i<=n;i++) {cout<<endl; for(j=1;j<=i;j++) cout<<v[i][j]<<" ";}
//         for(i=n+1;i<=2*n-1;i++){cout<<endl; for(j=1;j<=2*n-i;j++) cout<<v[i][j]<<" ";}
//         //end of test2
         
         max=0;row=n+1;
         for(j=1;j<=n-1;j++){
                              am = v[row][j]+maxx(v[row-1][j],v[row-1][j+1]);
                              if(am>max) max=am;
                              }
                              }
        cout<<"Case "<<t<<": "<<max<<endl;
         }//tstcase
         }//end
        
         
