#include<iostream>
using namespace std;

main()
{
      int t,tst;
      cin>>tst;
      for(t=1;t<=tst;t++)
      {
        int n,val;
        cin>>n;
        long long int sum=0;
        while(n--) {cin>>val; if(val>0)sum+=val; }
        cout<<"Case "<<t<<": "<<sum<<endl;
        }
        }
