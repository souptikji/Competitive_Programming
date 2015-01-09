#include<iostream>
#include<cmath>
using namespace std;

bool prim(int num)
{
     int i,sq;
     sq=sqrt(num);
     for(i=1;i<=sq+1;i++) if(num%i==0 && i!=1 && i!=num) return 0;
     return 1;
     }
     
     
main()
{
      int num,cnt=0;
      
      cout<<"{ ";
      for(num=0;num<=520;num++) if(prim(num)) {cout<<num<<", "; cnt++;}
      cout<<"}";
      cout<<"\nCOUNT IS"<<cnt<<endl;
      int c;cin>>c;
      }
