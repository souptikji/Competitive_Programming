#include<iostream>
using namespace std;
int abso(int x)
{
    if(x>=0) return x;
    else return -x;
}
main()
{
      int x1,x2,y1,y2;
      for(int tst=0;tst<6;tst++)
      {
              cin>>x1>>y1>>x2>>y2;
              if(x1==x2||y1==y2||abso(x1-x2)==abso(y1-y2)) cout<<"ATTACKING\n";
              else  cout<<"NOT ATTACKING\n";
              }
              }
