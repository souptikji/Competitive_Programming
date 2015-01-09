#include<iostream>
#include<cmath>
using namespace std;

main()
{
      int t,tst;
      cin>>tst;
      float pi = 2 * acos (0.0);
      for(t=1;t<=tst;t++)
      {
        float r,cir,sq,dif;
        
        cin>>r;
        cir = pi*r*r;
        sq= 4.0*r*r;
        dif=sq-cir;
        printf("Case %d: %.2f\n",t,dif);
        }
        }
        
