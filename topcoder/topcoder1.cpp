
#include<iostream>
#include<string>
using namespace std;


 class EllysTSP 
 {    
    public:
   int getMax(string places)
   {
       int i,ans,len,v=0,c=0,max,min;
       len=places.length();
       for(i=0;i<len;i++) if(places[i]=='V') v++; else c++;
       if(v==c) {max=v; min=c;}
       else if(v>c) {max=v;min=c;} else if(v<c){min=v; max=c;}
       if(min==0) ans=1;
       else if(max==min) ans=max+min-1;
       else if(max==min+1) ans=min+max;
       else if(max>min+1) ans=2*min+1;
       return ans;
       }
 
};

//main()
//{
//       int t=50;
//       string s;
//       while(t--)
//       {
//                 cin>>s;
//                 cout<<" Ans is "<<getMax(s)<<endl;
//                 }
//                 }
//  
//   
