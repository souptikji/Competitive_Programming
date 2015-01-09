#include<iostream>
using namespace std;

main()
{
      int tst=70;
      while(tst--)
      {
                  float a,b,c,t,t0;
                  cin>>a>>b>>c;
                  bool yes=1;
                  t=0.0;
                  while(1){
                           for(t0=t;t0<=c+t;t0+=1.0){cout<<"t"<<t<<" t0"<<t0; if(t<(t0*(a-b)/2)){ cout<<" yes"; yes=0; break;} cout<<endl;}
                           if(yes) break; else t+=1.0;
                           }
                  cout<<t<<endl;
                  }
                  }
                           
