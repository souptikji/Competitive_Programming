#include<iostream>
using namespace std;

main()
{
      int tst;
      cin>>tst;
      while(tst--)
      {
                  int n,i,j;
                  cin>>n;
                  char a[n][n];
                  for(i=0;i<n;i++)for(j=0;j<n;j++) cin>>a[i][j];
                  
                  //for(i=0;i<n;i++){cout<<endl;for(j=0;j<n;j++) cout<<"\n row"<<i<<" & col"<<j<<" is"<<a[i][j];}
                  //cout<<endl;
                 i=0;j=0;
                 
                 while(i<n && j<n)
                 {
                           if(i==n-1)
                           {         if(j==n-1){break;}
                                     else if(a[i][j+1]=='O'){cout<<"L";j++;}}
                           else
                           {
                           if(a[i+1][j]=='O') {cout<<"D";i=i+1;}
                           else if(a[i][j+1]=='O') {cout<<"L";j++;}
                           }
                           }//END OF WHILE
                           cout<<endl;
                           }}
                                                   
                  
