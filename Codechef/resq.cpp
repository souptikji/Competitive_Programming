#include<iostream>
#include<cmath>
using namespace std;

int mod(int n)
{
    if(n<0) return -n;
    else return n;
}

main()
{
      int tst;cin>>tst;
      while(tst--)
      {
         int num,sq,ans,i;
         cin>>num;
         sq=sqrt(num);
         if(sq*sq==num) ans=0;
         else{
              while(num%sq!=0) sq--;
              ans = mod(sq - (num/sq));}
              
              
              
            
         cout<<ans<<endl;
         }
}
         
        
         
