#include<fstream>
#include<iostream>
using namespace std;

int max(int a,int b)
{
    if(a>b) return a;
    else return b;
    
}


int main()
{
    int t,n,i,j,m,ar[100][100],a,k,flag,p=1,v[100],ai,bj;
    
    
    
              cin>>n;
              for(i=1;i<=n;i++)
              { cin>>v[i];
                              for(j=1;j<=n;j++)
                              {
                                 ar[i][j]=0;
                                 }
                                 }
              for(i=1;i<n;i++)
              {
                              cin>>ai>>bj;
                              ar[ai][bj]++; //ar[bj][ai]++;
                              }
              
              
              //cout<<"Present stats are ";
//            for(i=1;i<=n;i++){ cout<<endl;
//                               for(j=1;j<=n;j++) cout<<ar[i][j]<<" ";
//                               }
                               
                               
              for(i=1;i<=n;i++)
              {
                               for(j=1;j<=n;j++)
                               {
                                                if(i!=j)
                                                {
                                                        
                                                        if(ar[i][j]==1)
                                                        {
                                                                    //   cout<<i<<" "<<j<<endl;
                                                                       for(k=1;k<=n;k++)
                                                                       { if(k==j || k==i) continue;
                                                                       if(ar[j][k]>=1)
                                                                       {ar[i][k]=ar[i][j]+ar[j][k]; }}
                                                                       }
                                                                       
                                                        }
                                                
                                                }
                               }             
            
            
          //  cout<<"Present stats are ";
//            for(i=1;i<=n;i++){ cout<<endl;
//                               for(j=1;j<=n;j++) cout<<ar[i][j]<<" ";
//                               }
            
            
            int cc=0;
            for(i=1;i<=n;i++)
            {
                             for(j=1;j<=n;j++)
                             {
                                           //  cout<<ar[i][j]<<" ";
                                if(ar[i][j]>max(v[i],v[j])) cc+=2;}}
                                
            
            cout<<cc<<endl;
            
            int fal;
            cin>>fal;
            }
            
            
                               
                                            
