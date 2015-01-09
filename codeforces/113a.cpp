#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      int n,k,val,prob,time,i,j,count=0,dest;
      vector<int>p;vector<int>t; vector<int>rank;
      
      cin>>n>>k;
      for(i=0;i<n;i++)
      { cin>>val;
        p.push_back(val);
        cin>>val;
        t.push_back(val);
        rank.push_back(1);}//end of input
      
      //cout<<"\nrank list"<<endl ; 
      for(i=0;i<n;i++)
      {
                      prob=p[i]; time=t[i];
                      
                      for(j=0;j<n;j++)
                      {if(j!=i)
                      {
                               if((p[j]>prob)||(p[j]==prob && t[j]<time)) rank[i]++;
                               }}
                               //cout<<rank[i]<<" ";
                         // if(rank[i]==k-1) count++;     
                               }//end of for
      
      sort(rank.begin(),rank.end());
      dest=rank[k-1];
     // cout<<"\nDest is "<<dest;
      for(i=0;rank[i]<=dest;i++) if(rank[i]==dest) count++;
                               
      cout<<count<<endl;
      
      int c;cin>>c;
      }
      
                               
                                      
