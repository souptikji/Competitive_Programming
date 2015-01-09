#include<iostream>
#include<string>
using namespace std;

struct coor{
            double i;
            double j;
            };
            
int countAnts(int x[], int y[], string direction)
{
    
    int len,pt,pt2,it,cnt,i;
    bool dead;
    len=direction.length(); cnt=len;
    struct coor v[len]; 
    double xx[len],yy[len],t;
    for(i=0;i<len;i++) {xx[i]=x[i];yy[i]=y[i];}
    for(it=0;it<len;it++) 
    {
       if(direction[it]=='N') {v[it].i=0; v[it].j=1;}
       if(direction[it]=='S') {v[it].i=0; v[it].j=-1;}
       if(direction[it]=='E') {v[it].i=1; v[it].j=0;}
       if(direction[it]=='W') {v[it].i=-1; v[it].j=0;}
       }
    
   // for(i=0;i<len;i++) cout<<xx[i]<<"/"<<yy[i]<<" ";
       // cout<<endl;   
    for(t=0.5;t<=2000;t+=0.5)
    {
       if(cnt==0) break;
       for(pt=0;pt<len;pt++)
       {
          if(xx[pt]>5000) continue;
          xx[pt]+=0.5*v[pt].i;
          yy[pt]+=0.5*v[pt].j;}
      // for(i=0;i<len;i++) cout<<xx[i]<<"/"<<yy[i]<<" ";
        //cout<<endl;
       for(pt=0;pt<len;pt++)
       {  if(xx[pt]>5000) continue;
          dead=0;
          for(pt2=pt+1;pt2<len;pt2++) {if(xx[pt2]>5000) continue; if((xx[pt]==xx[pt2])&&(yy[pt]==yy[pt2])) {xx[pt2]=yy[pt2]=6000; dead=1; cnt--;}}
          if(dead) {xx[pt]=6000; yy[pt]=6000; cnt--;}
          }
          //cout<<"\nAlive ants at time"<<t<<" are ";
//          for(i=0;i<len;i++) if(x[i]<5000) cout<<i<<" ";
        
          }
       
       return cnt;
}

main()
{
      string str;
      int x[]={-1,-1,-1,0,0,0,1,1,1};
      int y[]={-1,0,1,-1,0,1,-1,0,1};

      str="ESEWNNEWW";
      cout<<"cnt is "<<countAnts(x,y,str)<<endl;
      int c;
      cin>>c;
      }
      
       
       
    
