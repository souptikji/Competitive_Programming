#include<iostream>
#include<string>
using namespace std;

main()
{
  int n,ans,cnt=0;
  cin>>n;
  while(n)
  {
    cnt++;
    n&=n-1;
}
 cout<<cnt<<endl;
 
}
