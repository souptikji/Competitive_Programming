#include<iostream>
using namespace std;

main()
{
      int tst,t; cin>>t;
      for(tst=1;tst<=t;tst++)
      {
          int r,c,row,col,blue=0,cnt=0;
          bool poss;
          cin>>r>>c;
          char a[r][c];
          
          for(row=0;row<r;row++) 
          {
             {for(col=0;col<c;col++) {cin>>a[row][col]; if(a[row][col]=='#') blue++; }}
             getchar();
             }
          
          for(row=0;row<r;row++) 
          for(col=0;col<c;col++) 
          {
             if(a[row][col]=='#'){
                                  poss=1;
                                  if(a[row][col+1]!='#') poss*=0;
                                  if(a[row+1][col]!='#') poss*=0;
                                  if(a[row+1][col+1]!='#') poss*=0;
                                  if(poss==1){ a[row][col]='/';
                                               a[row][col+1]='\\';
                                               a[row+1][col]='\\';
                                               a[row+1][col+1]='/';
                                               cnt+=4;}
                                               }
                                               }//end of for
             
             cout<<"Case #"<<tst<<":"<<endl;
             if(cnt!=blue) cout<<"Impossible"<<endl;
             else {
             for(row=0;row<r;row++) 
             {
                 {for(col=0;col<c;col++) cout<<a[row][col];}
                 cout<<endl;}
                 }//end of else
                 
                 }//end of tstcase
                 }//end
