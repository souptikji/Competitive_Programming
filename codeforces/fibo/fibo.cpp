#include<iostream>
using namespace std;

main()
{
      int a=1;
      int b=1;
      int f=0;
      int cnt=0;
      cout<<"{ ";
      while(f<1000000000)
      {
         f=a+b;
         cout<<f<<", ";
         cnt++;
         a=b;
         b=f;
         }
         
         cout<<" }";
         cout<<"\nCNT IS "<<cnt<<endl;
         }
                          
