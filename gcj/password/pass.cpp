#include<iostream>
using namespace std;

main()
{
      int t,tst;
      cin>>tst;
      for(t=1;t<=tst;t++)
      {
         int a,b,i,j;
         cin>>a>>b;
         double p[a+1],s1,s2,s2a,s2b,s3,min;
         for(i=1;i<=a;i++) cin>>p[i];
         //end of input
         
         if(a==1)
         {
            s1 = (p[1]*b)+((1-p[1])*(2*b+1));
           // cout<<s1<<endl;
            min=s1;
            s2 = b+2;
            if(s2<min) min=s2;
            //cout<<s2;
            }
         
         else if(a==2)
         {
              s1 = (p[1]*p[2]*(b-1)) +2*b*(1-p[1]*p[2]);  min=s1;
              //cout<<s1<<endl;
              s2a = (b+1)*(2-p[1]);  if(s2a<min) min=s2a;
             // cout<<s2a<<endl;
              s3 = b+2;  if(s3<min) min=s3;
              //cout<<s3<<endl;
              }
         
         else if(a==3)
         {
              s1 =  ((b-2)*p[1]*p[2]*p[3]) + ((2*b-1)*(p[1]+p[2]+p[3]-(p[1]*p[2])-(p[1]*p[3])-(p[2]*p[3])));
              min=s1;
              cout<<s1<<endl;
              s2a = ((b)*p[1]*p[2]*p[3]) + ((b)*p[1]*p[2]*(1-p[3])) + ((2*b+1)*p[1]*p[3]*(1-p[2])) + ((2*b+1)*p[2]*p[3]*(1-p[1])) + ((2*b+1)*p[1]*(1-p[3])*(1-p[2])) + ((2*b+1)*p[2]*(1-p[3])*(1-p[1])) + ((2*b+1)*p[3]*(1-p[1])*(1-p[2]));
              if(s2a<min) min=s2a;
              cout<<s2a<<endl;
              
              s2b = ((b+2)*p[1]*p[2]*p[3]) + ((b+2)*p[1]*p[2]*(1-p[3])) + ((b+2)*p[1]*p[3]*(1-p[2])) + ((2*b+3)*p[2]*p[3]*(1-p[1])) + ((b+2)*p[1]*(1-p[3])*(1-p[2])) + ((2*b+3)*p[2]*(1-p[3])*(1-p[1])) + ((2*b+3)*p[3]*(1-p[1])*(1-p[2]));
              if(s2b<min) min=s2b;
              cout<<s2b<<endl;
              
              s3=b+2;
              if(s3<min) min=s3;
              cout<<s3<<endl;
              }
         
         printf("Case #%d: %.5f\n",t,min);
         //cout<<"Case #"<<t<<": "<<min<<endl;
         
         }//end of tstcase
         }//end
              
         
         
         
