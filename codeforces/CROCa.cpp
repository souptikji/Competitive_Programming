#include<iostream>
using namespace std;

main()
{
      int fr,cnt=0,i; 
      
     
      bool cmp=0;
      char p[21]={0},f[21]={0};
      cin>>fr; fr--;
      cin>>p;
      while(fr--)
      {
                 cin>>f;
                 for(i=0;p[i]!=0;i++){
                                      if(p[i]!=f[i]) {p[i]=0;
                                                      break;}}//end of for
                                                      }//end of while
      for(i=0;p[i]!=0;i++) cnt++;
      cout<<cnt<<endl;
     
      }//end
      
      
      
