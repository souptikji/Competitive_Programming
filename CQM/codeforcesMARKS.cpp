#include<iostream>
#include<vector>
using namespace std;

main()
{
      
      
      {
                  int n,m,i,j,succ;
                  cin>>n>>m;
                  char a[n][m];
                  char max[m];
                  for(i=0;i<m;i++){
                                   cin>>a[0][i];
                                   max[i]=a[0][i];
                                   }
                                   
                  for(j=1;j<n;j++){
                                   for(i=0;i<m;i++){
                                                    cin>>a[j][i];
                                                    if(a[j][i]>max[i]) max[i]=a[j][i];
                                                    }}
                  
                  //for(i=0;i<m;i++) cout<<"\nHighest of paper"<<i<<" is "<<max[i];
                  succ=0;
                  
                  for(j=0;j<n;j++){
                                   for(i=0;i<m;i++){
                                                    if(a[j][i]=max[i]) {succ++;break;}
                                                    }}
                  cout<<succ;
                                   
                  
                  
                  
                  
                  
                  
                  
                  
                  }//end of the testcase
                  }//end of loop
      
