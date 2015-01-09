#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;


int fun(double a,double b,double r,int chance)
{
    if(r>(a/2)||(r>b/2)) { if(chance==1) return(2); else return(1);}
    else {chance= (chance+1)%2; return fun((a/2)-r,((a*r)-(a*a/4)),r,chance);}
}
    


main()
{  
  
    float a,b,r;
    cin>>a>>b>>r;
  //  cout<<"fun is "<<fun(a,b,r,1)<<endl;
    if(fun(a,b,r,1)==1) cout<<"First"<<endl;
    else cout<<"Second"<<endl;

}
   
      
                 
                  
                
