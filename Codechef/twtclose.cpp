#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
using namespace std;

main()
{
      int n,k,cnt=0,num,i;
      string s;
      scanf("%d %d",&n,&k);
      bool a[n];
      for(i=0;i<n;i++) a[i]=0;
      while(k--)
      {
        cin>>s;
        if(s=="CLICK") {
                        cin>>num;
                        a[num-1]^=1;
                        if(a[num-1]) cnt++;
                        else cnt--;
                        cout<<cnt<<endl;
                        }
        
        else if(s=="CLOSEALL") {for(i=0;i<n;i++) a[i]=0;
                                cnt=0; 
                                cout<<cnt<<endl;}
                                
                                }//tstcase
                                }/// 
