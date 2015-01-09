#include<iostream>
#include<cstdio>
#define min(a,b) ((a)<(b))?(a):(b)
using namespace std;

main()
{
      int n,i,j,cas=1;
      
      
      while(cin>>n)
      {
                   if(n==0) break;
                   int v[n][3],x;
                   int dp[n][3];
                   for(i=0;i<n;i++) for(j=0;j<3;j++) {cin>>v[i][j];dp[i][j]=0;}
                   
                   // for(i=0;i<n;i++) for(j=0;j<3;j++) {cout<<v[i][j]<<" ";}
                   // cout<<endl;
                   
                   dp[0][1]=v[0][1];
                   dp[0][2]=v[0][1]+v[0][2];
                  // cout<<endl;
                   
                   
                  //  for(i=0;i<n;i++){cout<<endl; for(j=0;j<3;j++) cout<<dp[i][j]<<" ";}
                    //cout<<endl;
                    
                   for(i=1;i<n;i++)
                   {     if(i==1)
                        {x=v[i][0];
                         dp[i][0]=(dp[i-1][1]);
                         dp[i][0]+=x;
                         
                         dp[i][1]=min(dp[i][0],min(dp[i-1][2],dp[i-1][1])); 
                         dp[i][1]+=v[i][1] ;
                         
                         dp[i][2]=min(dp[i][1],min(dp[i-1][2],dp[i-1][1])); 
                         dp[i][2]+=v[i][2];  
                         
                        // cout<<"\nFor j0 "<<(dp[i-1][1]);
//                         cout<<" and j1 "<<min(dp[i][0],min(dp[i-1][2],dp[i-1][1]));
//                         cout<<" and j2 "<<min(dp[i][1],min(dp[i-1][2],dp[i-1][1]));
//                         cout<<endl;
                          }
                         else{   
                         dp[i][0]=min(dp[i-1][0],dp[i-1][1]);
                         dp[i][0]+=v[i][0];
                         
                        dp[i][1]=min(dp[i-1][0],min(dp[i][0],min(dp[i-1][2],dp[i-1][1])));
                        dp[i][1]+=v[i][1] ;
                        
                          dp[i][2]=min(dp[i][1],min(dp[i-1][2],dp[i-1][1]));
                          dp[i][2]+=v[i][2];
                          
                          //cout<<"\nFor j0 "<<min(dp[i-1][0],dp[i-1][1]);
//                          cout<<" and j1 "<<min(dp[i-1][0],min(dp[i][0],min(dp[i-1][2],dp[i-1][1])));
//                          cout<<" and j2 "<<min(dp[i][1],min(dp[i-1][2],dp[i-1][1]));
//                          cout<<endl;
                          }     
                         }
                         cout<<cas<<". "<<dp[n-1][1]<<endl; cas++;
                         
                  // for(i=0;i<n;i++){cout<<endl; for(j=0;j<3;j++) cout<<dp[i][j]<<" ";}
                   }//end of testcase
                   }//end
                   
                       
                   
