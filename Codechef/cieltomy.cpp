#include<iostream>
#include<vector>
#include<queue>
using namespace std;

main()
{
      int tst;cin>>tst;while(tst--){

   int n,m,src,dest,val,i,j,shortest=1<<30,num=0;
   cin>>n>>m;
   int v[n+1][m+1]; for(i=0;i<=m;i++) for(j=0;j<=n;j++) v[n][m]=-1;
   bool vis[n+1]; for(i=0;i<=n;i++) vis[i]=0;
   
   for(i=0;i<m;i++){
                    cin>>src>>dest>>val;
                    v[src][dest]=val;
                    v[dest][src]=val;}
   
   queue<int>q;  
   while(!q.empty()) q.pop();
   q.push(1); q.push(0);
   
   while(!q.empty())
   {
        dest=q.front(); q.pop();
        val=q.front(); q.pop();
        if(dest==n)
        {
            if(val<shortest) {shortest=val; num=1;}
            else if(val==shortest) num++;
            }
        
        else
        {
            if(vis[dest]) continue;
            vis[dest]=1;
            for(i=1;i<=n;i++)
            {
                             if(v[dest][i]!=-1){
                                                  q.push(i);
                                                  q.push(val+v[dest][i]);}
                                                  }//for
                                                  }//else
                                                  }//while
        
        cout<<num<<endl;
        }//tstcase
        }//end
   
