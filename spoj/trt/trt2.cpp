#include<iostream>
#define max(a,b) ((a)>(b))?(a):(b)
using namespace std;

//int value[2000][2000]={0};
int v[2000]={0};
int a=0;

int val(int i,int j)
{
    int ret;
    a++;
    cout<<"Call for "<<i<<" to "<<j<<endl;
    //if(value[i][j]!=0) {cout<<"\npehle se hai ";ret=value[i][j];}
    if(i==j) {ret=v[i]*a;cout<<"\nLast case";}
    else{ cout<<"\ntie between "<< (val(i+1,j)+(a*v[i]))<<" and "<<(val(i,j-1)+(v[j]*a)) ;
         ret = max(   (val(i+1,j)+(a*v[i]))  , (val(i,j-1)+(v[j]*a))  );}
  
    return ret;
}
main()
{
      int i,n;
      cin>>n;
      
      for(i=0;i<n;i++) {cin>>v[i];}
      cout<<"\nAnswer is "<<val(0,n-1)<<endl;
      cout<<"over\n";
      int c;
      cin>>c;
      }
      
