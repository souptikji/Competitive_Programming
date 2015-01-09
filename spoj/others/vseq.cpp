#include<iostream>
using namespace std;

main()
{
      
      int n,i,j,max,num;
      cin>>n;
      int a[n],l[n],b[n],s[n];
      for(i=0;i<n;i++) {cin>>a[i];}
      
      
     // start front
      for(j=0;j<n;j++)
      {
                      max=1;
                      for(i=j-1;i>=0;i--){
                                          if(a[i]>a[j]) {num=1+l[i]; if(num>max) max=num;}}
                      l[j]=max;
                   //  cout<<l[j]<<" "; 
                      }
      // cout<<endl;               
     //end of front
     
      //back
       for(j=n-1;j>=0;j--)
      {
                      max=1;
                      for(i=j+1;i<n;i++){ //cout<<"\nComparing "<<a[j]<<" with "<<a[i]<<endl;
                                          if(a[i]>a[j]) {num=1+b[i];
                                          //cout<<"Bazooka.. so num"<<num<<" and max"<<max<<endl; 
                                          if(num>max) max=num;}}
                      b[j]=max;
                      
                      }
      //for(j=0;j<n;j++) cout<<b[j]<<" "; 
      //cout<<endl;
                      //end of back
                      
     
     s[0]=l[0]+b[0]; max=s[0];
     for(j=1;j<n;j++) {s[j]=l[j]+b[j]; if(s[j]>max) max=s[j];}
     //end of sum
     
     cout<<max-1<<endl;
                      
                      }
      
      
                      
