#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int abs(int a)
{
    if(a>=0) return a;
    else return -a;
}

main()
{
      int tst; cin>>tst;
      while(tst--)
      {
                  long long int n,a,b,xben,yben,i;
                  long long int ans;
                  cin>>n;
                  vector<int>x;
                  vector<int>y;
                  
                  if(n%2!=0) {ans=1; while(n--) cin>>a>>b;}
                  
                  else if(n%2==0){
                         x.clear();
                         y.clear();
                         for(i=0;i<n;i++) {cin>>a>>b; x.push_back(a); y.push_back(b);}
                         sort(x.begin(),x.end());
                         sort(y.begin(),y.end());
                         xben = ( x[n/2]-x[(n/2)-1])+1;
                         yben = ( y[n/2]-y[(n/2)-1])+1;
                         
                         ans=xben*yben;
                         }
                         
                         printf("%lld\n",ans);
                         }//tstcase
                         }//end
                         
      
