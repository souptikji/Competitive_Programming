#include<iostream>
using namespace std;

long int path(int i,int j,int n)
{
    
    if(i==n && j==n-1) return 1;
    else if(i==n-1 && j==n) return 1;
   else{ int sum=0;
          if(i+1<=n) sum+=path(i+1,j,n);  
          if(j+1<=n) sum+=path(i,j+1,n);
    
    return(sum);}
}

main()
{
      int tst=50;
      while(tst--)
      {
                  int n;
                  cin>>n;
                  cout<<path(1,1,n)<<endl;
                  }
                  }
