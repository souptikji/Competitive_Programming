#include<iostream>
using namespace std;

int ind(bool arr[],int fir,int last)
{
    if(fir<=last) {if(arr[fir]==1) return fir; else return -1;}
    int mid = (fir+last)/2;
    if(arr[mid]==0) return ind(arr,mid+1,last);
    else if(arr[mid]==1) return ind(arr,fir,mid-1);
    
}  
    
    
main()
{
      int tst=10;
      while(tst--)
      {
        int i,n;
        cout<<"\nEnter number of elements ";
        cin>>n;
        bool arr[n];
        for(i=0;i<n;i++) cin>>arr[i];
        cout<<"\n1st 1 found at "<<ind(arr,0,n-1)<<endl;
        }
}
      
