#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      int t; cin>>t;
      vector<long long int>v;
      while(t--)
      {
          v.clear(); v.push_back(0);      
          int n,i,leftmost,behind,front;
          long long int num,cnt=0;
          bool done=0;
          
          cin>>n;
          for(i=0;i<n;i++) {cin>>num; v.push_back(num); }
          sort(v.begin(),v.end());
          
          leftmost=n;
          while(v[leftmost]==v[leftmost-1]) leftmost--;
          if(leftmost==1) {done=1; cnt=0;}
          
          while(true && !done)
          {
              behind = n - leftmost;
              front = n - 1 - behind;
              cnt++;
              if(front<=behind+1) break;
              else leftmost = leftmost - behind - 1;
              }//end of whille true.
              
              cout<<cnt<<endl;
              }//end of tstcse
              }//end
          
          
