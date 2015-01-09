#include<iostream>
#include<vector>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
       return a;
    else
       return gcd(b, a%b);
       }
       
       
main()
{
      
                  int n,m,i,j,val,nu,den,g;
                  bool nega=0,negb=0;
                  cin>>n>>m;
                  vector<int>a;
                  vector<int>b;
                  a.clear(); b.clear();
                  for(i=0;i<=n;i++) {cin>>val; a.push_back(val);}
                  for(i=0;i<=m;i++) {cin>>val; b.push_back(val);}
                  
                  if(n<m) cout<<"0/1"<<endl;
                  
                  else if(n==m)
                  {
                       if(a[0]==0 && b[0]==0) cout<<"Infinity"<<endl;
                       else if(a[0]==0 || b[0]==0)  cout<<"0/1"<<endl;
                       else{
                       nega=0;negb=0;
                       if(a[0]<0) {a[0]=-a[0]; nega=1;}
                        if(b[0]<0) {b[0]=-b[0]; negb=1;}     
                       g=gcd(a[0],b[0]);
                       nu=a[0]/g; den=b[0]/g;
                       if((nega==1&&negb==0) || (negb==1&&nega==0)) nu=-nu;
                       cout<<nu<<"/"<<den<<endl;
                       }}
                  
                  else if(n>m)
                  {
                       if(a[0]>0 && b[0]>0 || a[0]<0 && b[0]<0) cout<<"Infinity"<<endl;
                       else cout<<"-Infinity"<<endl;
                       }
                       
                       int c; cin>>c;

}
