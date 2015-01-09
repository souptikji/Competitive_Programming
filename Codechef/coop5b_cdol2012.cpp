#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      int t;cin>>t;
      while(t--)
      {
                int n,k,val,i,j,temp;
                vector<int>a;
                long long int sum=0;
                a.clear();
                cin>>n>>k;
                for(i=0;i<n;i++) {cin>>val; a.push_back(val);}
                sort(a.begin(),a.end());
                

                for(i=n-1;i>n-k-1;i--) sum+=a[i];
                cout<<sum<<endl;
                
                }//tstcase
                }//end
