#include<iostream>
#define B 1
#define O 0
using namespace std;
int mod(int x)
{
    if(x>0) return x;
    else return -x;
}

int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}


main()
{
      int t,i,j,n;
      cin>>t;
      for(j=1;j<=t;j++)
      {
                cin>>n;
                char bott,pre;
                int pos,bot;
                int dis[2];dis[0]=1;dis[1]=1;
                int m[2],p[2],trans=0,t=0;
                
                for(i=0;i<n;i++)
                {
                        cin>>bott>>pos;
                        if(bott=='B') bot=1; else bot=0;
                        m[bot]=mod(dis[bot]-pos);
                        p[bot]=1;
                        //end of input and init
                        
                        if(i==0) { trans+=m[bot]+p[bot];
                                   t+=trans;
                                   pre=bot;}//end of 1st case
                        else
                        {
                         if(bot==pre) { trans+=m[bot]+p[bot];
                                        t+=m[bot]+p[bot];  }
                                        
                      else if(bot!=pre) { m[bot]=max(0,m[bot]-trans);
                                          trans=m[bot]+p[bot];
                                          t+=trans;
                                          pre=bot;}
                                          }//end of else
                       
                       dis[bot]=pos;
                       }
                       
                       cout<<"Case #"<<j<<": "<<t<<endl;
                       }//end of tstcase
                       }//end             
                
