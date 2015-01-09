#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myfunction (int i,int j) { return (i>j); }

main()
{
      
                  int n,i,j,s1=0,s2=0,summ,prod;
                  char val;
                  vector<int>v1;
                  vector<int>v2;
                  cin>>n;
                  for(i=0;i<n;i++){
                                   cin>>val;
                                   v1.push_back(val-'0');
                                  }//inputted n chars
                  
                   for(i=0;i<n;i++){
                                   cin>>val;
                                   v2.push_back(val-'0');
                                  }//inputted n chars
                  
                  
                  sort(v1.begin(),v1.end(),myfunction);
                  sort(v2.begin(),v2.end(),myfunction);
                  
                  bool cmp=0;
                  //checking if all values greater
                  for(i=0;i<n;i++){
                                   if(v1[i]<=v2[i]){
                                                   cmp=1;
                                                   }}
                  if(!cmp) cout<<"YES\n"; 
                                  
                  else{
                       cmp=0;
                       for(i=0;i<n;i++){
                                   if(v1[i]>=v2[i]){
                                                   cmp=1;
                                                   }}
                                                   if(!cmp) cout<<"YES\n"; 
                                                   else cout<<"NO\n";
                                                   }
                       
                                   
                  
                                   
                  
                                   
                  
                  
                  
                  }//end of program
      
