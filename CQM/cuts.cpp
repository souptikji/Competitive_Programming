#include<iostream>
using namespace std;

main()
{
      int tst,cas=0;
      cin>>tst;
      while(tst--)
      {
                  int w,k,i=0;
                  cas++;
                  cin>>w>>k;
                  
                  do
                  {
                            w/=2;
                            i++;
                            }
                            while(w>k);
                  cout<<"Block #"<<cas<<": "<<i<<endl;
                  
                  }
                  }
