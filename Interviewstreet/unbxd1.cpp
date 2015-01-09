


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

main()
{ 
      
   int n,k,i,val,len,t,c;
   c=-1000000;
   vector<int>a;
   cin>>n>>k;
   for(i=0;i<n;i++) { cin>>val; a.push_back(val);}
   sort(a.begin(),a.end());
   len = a.size();
   t=0;
   for(i=0;i<len;i++) {
                        if(a[i]>c) { c=a[i]+(2*k); t++;} }
   cout<<t<<endl;
   

}//end
   
   
