#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int mod(int a)
{
 if(a>=0) return a;
 else return(-a);}
 

int getMinimumCost(int X)
{
 int n=X,i,j,n2=0,len;

vector<int>v;
 while(n){ v.push_back(n%10); n=n/10;}
 reverse(v.begin(),v.end());
  len=v.size();
  
 if(len%2) 
 {
 i=len/2-1; j=len/2+1;
  while(i>=0 && j<len)
 {
  if(v[i]!=v[j]) v[j]=v[i];
 
  i--; j++;}
  for(i=0;i<len;i++) {n2*=10; n2+=v[i];} 
  int f=len/2,pp=1,n2odd;
  while(f){ pp*=10; f--;}
  n2odd=n2-pp;
  cout<<"(mod(n2-X))is"<<(mod(n2-X))<<" and other is"<<(mod(n2odd-X))<<endl;
  if( (mod(n2-X))>(mod(n2odd-X)) ) return((mod(n2odd-X)));
  else return((mod(n2-X))); 
  } //endif
  
 else {i=len/2-1; j=len/2;
 while(i>=0 && j<len)
 {
  if(v[i]!=v[j]) v[j]=v[i];
 
  i--; j++;}
   for(i=0;i<len;i++) {n2*=10; n2+=v[i];}
    return(mod(n2-X));
   }
  
 
 
 
 
  }//f
 
 main()
 {
       int tst=100,x;
       while(tst--)
       {
                   cin>>x;
                   cout<<getMinimumCost(x)<<endl;
                   }}
                   
