#include<iostream>
using namespace std;

main()
{
      
                  int n,k,i,j,num,sum,num1;
                  cin>>n>>k;
                  
                  sum=n+1;num=n+1;
                  while(sum>=n){ 
                  
                                num--;
                               // if(num<0) break;
                                //cout<<"\nNum is "<<num;
                                num1=num;
                                sum=0;
                                while(num1>0){
                                              sum+=num1;
                                              num1/=k;
                                              }//end of inner while
                                              //cout<<"\nsum is "<<sum;
                                              }//end of outer while
                                              
                  cout<<num+1<<endl;
                  
                  
                  //end of testcase
                  }//end of program
