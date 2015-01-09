#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      
                  int n,k,i,val,f,s;
                  vector<int>v;
                  cin>>n>>k;
                  for(i=0;i<n;i++) {cin>>val;v.push_back(val);}
                  sort(v.begin(),v.end());
                  
                  //outputting values
                 // cout<<"\nThe vector contains ";
//                  for(i=0;i<n;i++) cout<<v[i]<<" ";
//                  cout<<endl;
                  //end of outputting
                  
                  
                  if(k<n){
                          cout<<v[0]<<" "<<v[k-1];
                  
                   }
                  else   
     
                  
                 { f=k/n; s=k%n;
                  //cout<<"f is "<<f<<endl;
                  //cout<<" s is "<<s<<endl;
                  if(s==0) s=n-1;
                  if(f==n) f=n-1;
                  cout<<v[f]<<" "<<v[s];
                  }
                  
                  
                 
                  }//end of program
