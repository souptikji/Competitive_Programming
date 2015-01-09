#include<iostream>
#define max(a,b) ((a)>(b))?(a):(b)
using namespace std;

int value[2000][2000];
int v[2000]={0};


int val(int i,int j,int a)
{
    int ret;
    if(i==j) {ret=v[i]*(a); } 
   else if(value[i][j]!=0) ret=value[i][j];
  
    else{ 
         ret = max(   (val(i+1,j,a+1)+(a*v[i]))  , (val(i,j-1,a+1)+(v[j]*a))  );
         value[i][j]=ret;
        }
  
    return ret;
}
main()
{
      int i,j,n,a=0;
      cin>>n;
      
      // for(i=0;i<15;i++){ cout<<endl; for(j=0;j<15;j++) cout<<value[i][j];}
       
      for(i=0;i<n;i++) {cin>>v[i];}
      cout<<val(0,n-1,1)<<endl;
      
      //for(i=0;i<15;i++){ cout<<endl; for(j=0;j<15;j++) cout<<value[i][j];}
      
     // int c;
     //cin>>c;
      }
      
