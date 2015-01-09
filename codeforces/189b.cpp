#include<iostream>
using namespace std;
long long int min(long long int a, long long int b)
{
     if(a<b) return a;
     else return b;
     }
     
     
main()
{
      long long int w,h,cnt,y,ht,x,left,right,mult,yn,c1,c2;
      cnt=mult=0;
      cin>>w>>h;
      
      //for(y=1;y<h;y++){  yn=min(y,w-y);
//                         for(ht=1;ht<=yn ;ht++) cnt+=(w*w)/4; }

  c1 = (w*w)/4;
  c2 = (h*h)/4;
  cnt=c1*c2;
                                                   
      cout<<cnt;
                           
}
      
