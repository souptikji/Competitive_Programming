#include<iostream>
using namespace std;

int bs(int a[],int fir,int last,int num)
{
    int mid = (fir+last)/2;
    if(a[mid]==num) return mid;
    else if(a[last]==num) return last;
    else if(a[fir]==num) return fir;
    else{
          if(num>a[mid]&&num<a[last]) return bs(a,mid+1,last,num);
          else return bs(a,fir,mid-1,num);
          }
         // else if(num>a[mid]&&num>a[n]) return bs(a,fir,mid-1,num);
//          else if(num<a[mid]&&num<a[n]) return bs(a,fir,mid-1,num);
//          else if(num<a[mid]&&num>a[n]) return bs(a,mid+1,last);

}


main()
{
      int t;cin>>t;
      while(t--)
      {
          int n,i,num; cin>>n; int a[n+1];
          for(i=1;i<=n;i++) cin>>a[i];
          cin>>num;
          cout<<bs(a,1,n,num);
          cout<<"\nover"<<endl;
          }
          }
      
