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
                for(i=0;i<k;i++) {cin>>val; a.push_back(val);}
                sort(a.begin(),a.end());
                // cout<<"\nk array is ";
//                 for(j=0;j<k;j++) cout<<a[j]<<" ";
                for(i=k;i<n;i++){
                                 cin>>val;
                                 if(val>a[0]){ a[0]=val;
                                               j=1;
                                               while(j<k&&a[j]<val){ temp=a[j];
                                                                     a[j]=a[j-1];
                                                                     a[j-1]=temp; j++;}
                                                                     }
                               //  cout<<"\nk array is ";
//                                 for(j=0;j<k;j++) cout<<a[j]<<" ";
                                               
                                               }
                for(i=0;i<k;i++) sum+=a[i];
                cout<<sum<<endl;
                
                }//tstcase
                }//end
