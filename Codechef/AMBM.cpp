#include<iostream>
using namespace std;

main()
{
      int tst;
      cin>>tst;
      while(tst--)
      {
                  int n,k,i,j,coeff;
                  cin>>n>>k;
                  //cout<<"\nya";
                  int a[k],b[k];
                  
                  
                  for(i=0;i<k;i++){
                                   cin>>a[i];
                                    //cout<<"\nya";
                                   b[i]=0;coeff=1;
                                   for(j=i;j>=0;j--){
                                                     b[i]+=coeff*a[j];
                                                     //cout<<"\nb"<<i<<" += "<<coeff<<" * "<<a[j];
                                                     coeff*=2;
                                                     }}
                   for(i=0;i<k;i++) cout<<b[i]<<" ";
                   cout<<endl;
                  
                  
                  
                  
                  
                  
                  }//end of the testcase
                  }//end of program
