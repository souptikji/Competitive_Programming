#include<iostream>
#include<vector>
using namespace std;

vector<int>v;

long mod(long x)
{ if(x>0) return x; else return -x;}

bool exist(long a)
{
     int i;
     for(i=0;i<v.size();i++) if(a==v[i]){return true;}
     return false;
     }
     
     

long gcd(long a,long b)
 {
if (a%b==0) return b; else return gcd(b,a%b);
}

long lcm(long a,long b)
{
    return ((a*b)/gcd(a,b));
}

main()
{
      int t,i,j;
      long a,b,c,d,k,l[5],tar,diff;  //First line contains T, the number of test cases. Each of the next T lines contains five positive integers, A B C D K.
      cin>>t;
      while(t--)
      {
           v.clear();     
          cin>>a>>b>>c>>d>>k;
         l[0]=lcm(a,c); l[1]=lcm(a,d); l[2]=lcm(b,c); l[3]=lcm(b,d); l[4]=lcm(mod(a-b),mod(c-d));
         
         for(i=0;i<5;i++)
         {tar=l[i];
          if((!exist(tar))&&tar<=k) v.push_back(tar);
          
          for(j=0;j<5;j++)
          {diff=mod(tar-l[j]);
           if((!exist(diff))&&diff<=k) v.push_back(diff);}
           }//end of outer for
           
         int count=0;
         for(i=0;i<v.size();i++){if(v[i]==0) count++; else count+=2;}
         cout<<count<<endl;
         
         }//tstcase
         }//end
           
          
         
         
         
           
      
