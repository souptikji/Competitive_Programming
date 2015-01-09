#include<iostream>
#include<cmath>
using namespace std;
main()
{
      int t;cin>>t; while(t--){
      long long int n,i,min=100000000,j;
      bool minus=0,pass=1;
      cin>>n;
      long long int ar[n];
      for(i=0;i<n;i++) {cin>>ar[i]; if(ar[i]<min) min=ar[i];}
      int div[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461};
      double dlim=pow((double)min,0.5);
      //cout<<(int)dlim+1<<endl;
      for(i=0;div[i]<=(int)dlim+5;i++)
      { pass=1;
        for(j=0;j<n;j++) if(ar[j]%div[i]!=0) {pass=0;break;}
        if(pass) break;
        }
        
  if(pass) cout<<div[i]<<endl;
  
  else{ pass=1;
       for(j=0;j<n;j++) if(ar[j]%min!=0) {pass=0;break;}
       if(pass) cout<<min<<endl;
       else cout<<"-1"<<endl;
       }
       
       }}
       
