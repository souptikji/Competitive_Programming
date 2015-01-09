#include<iostream>
#include<queue>
using namespace std;

main()
{
      int n,i,val,n1,n2,eff=0,res;
      cin>>n;
      priority_queue<int>pq;
      while(n--) {cin>>val; pq.push(val*(-1));}
      
      while(pq.size()>1)
      {
         n1=pq.top(); pq.pop();
         n2=pq.top(); pq.pop();
         res=n1+n2;
         eff = eff-res;
         pq.push(res);
         }
         
      
      pq.pop();
      cout<<eff<<endl;
      
      
      }
      
         
