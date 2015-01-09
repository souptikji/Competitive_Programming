#include<iostream>
using namespace std;

main()
{
      int tst; cin>>tst;
      while(tst--)
      {
          int n,f,maxf,rem;  bool done;  
          cin>>n;
          maxf=n/7; done=0;
          for(f=maxf;f>=0;f--)
          {
             rem = n - (7*f);
             if(rem%4==0) {done=1; break;}}
             
             if(!done) cout<<"-1"<<endl;
             else cout<<7*f<<endl;
             }//tstcase
             }//end
          
          
