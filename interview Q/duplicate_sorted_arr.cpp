/*
A sorted array has a number of elements repeated in it.
I have to take this array and without using any extra memory, 
do in place copying to compact the array, 
so the resulting array would not have duplicates.

ANS : solution with two pointers - one to move with every unique item -p and other one moving for each item in the original array -i.
 Whenver a new item is encounterd by the i pointer, the data is copied on to the location of the p pointer and it is moved one step

*/

#include<iostream>
using namespace std;

int remove_duplicate(int a[],int n)
{
    int i,p;
    i=0;p=0;
    for(i=1;i<n;i++) { if(a[i]!=a[p]) { p++;
                                        if(p!=i) a[p]=a[i];
                                        }}
    return (p+1);
}
                     

main()
{
      int t;cin>>t;
      while(t--)
      {
          int i,n,len;      
          cout<<"Enter n ";
          cin>>n; int a[n];
          for(i=0;i<n;i++) cin>>a[i];
          len = remove_duplicate(a,n);
          cout<<"\nThe new array is ";
          for(i=0;i<len;i++) cout<<a[i]<<" ";
          cout<<endl;
          
          }
}
      

 
