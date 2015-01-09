#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int val[10000000];

int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}

int f(int n)
{
    int a,b,c,d;
    
    if(n==0){val[n]=0; return val[n];}
    else if(n==1){val[n]=1; return val[n];}
    else if(n==2){val[n]=2; return val[n];}
  else if(val[n]!=0) {return val[n];}
  else  {b=f(n/2);
         c=f(n/3);
         d=f(n/4);
         a= max(n,b+c+d);
         val[n]=a;
         return a;}
         }

main()
{
     long long int n,ab;
     // int val[10000000]={0};
      while(cin>>n) {ab=f(n);cout<<ab<<endl;}
     // cout<<f(12)<<endl;
      
      }
     
