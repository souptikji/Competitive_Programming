#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

main()
{
      int n,q,num,val,i,j,max=-1;
      string op;
      cin>>n>>q;
      int row[n],col[n];
      for(i=0;i<n;i++) {row[i]=0; col[i]=0;}
      while(q--)
      {
                cin>>op>>num>>val;
                num--;
                if(op=="RowAdd") row[num]+=val;
                else if(op=="ColAdd") col[num]+=val;
               
                                }
      
      int maxr=0,maxc=0;
      for(i=0;i<n;i++) {if(row[i]>maxr) maxr=row[i]; if(col[i]>maxc) maxc=col[i]; }
      max=maxr+maxc;
      cout<<max<<endl;
     //int c; cin>>c;
      }//main
                
                
