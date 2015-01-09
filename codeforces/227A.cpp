#include<iostream>
#include<string>
using namespace std;

#define inf 100000
long long mod(double a)
{
     if(a>=0) return a; else return(-a);}
     
main()
{
      
        double xa,xb,xc,ya,yb,yc,sab,sbc;
       
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
         if(xb!=xa) sab=(yb-ya)/(xb-xa); else sab=(yb-ya)/mod(yb-ya)*inf;
        if(xc!=xb) sbc=(yc-yb)/(xc-xb); else sbc=(yc-yb)/mod(yc-yb)*inf;
        if(sab==sbc) cout<<"TOWARDS"<<endl;
        else if(sab*sbc<0) cout<<"LEFT"<<endl;
        else cout<<"RIGHT"<<endl;
        //if(yb==yc) {if(xc<xb) cout<<"LEFT"<<endl; else cout<<"RIGHT"<<endl;}
   // else if(xb==xc) {if(yc<yb) cout<<"RIGHT"<<endl; else cout<<"LEFT"<<endl;}
    //else cout<<"TOWARDS"<<endl;
}    
