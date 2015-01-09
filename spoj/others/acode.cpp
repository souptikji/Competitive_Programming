#include<iostream>
#include<cstdio>
using namespace std;

main()
{
      int tst=5;
      char c;
      while((c=getchar())!='0')
      {
                  
                  int num1 = c-'0',num2;
                  
                  int ps=1,pd=0,s,d;
                  while((c=getchar())!='\n')
                  {
                                            num2=c-'0';
                                            if(num2==0) {d=ps;s=0;}
                                            else{
                                            if((10*num1+num2)<27){
                                                                  s=ps+pd;
                                                                  d=ps;
                                                                  }
                                            else{
                                                 s=ps+pd;
                                                 d=0;
                                                 }
                                                 
                                                 num1=num2;
                                                 ps=s;
                                                 pd=d;
                                                 }}//end of while inner
       cout<<s+d<<endl;
                                            
                                            
      
                  
                  }//end of testcase
                  }//end of program
