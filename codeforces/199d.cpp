#include<iostream>
#include<vector>
using namespace std;

main()
{
      int tst=50;
      while(tst--)
      {
        
        int n,k,i,j;
        string up,dow;
        cin>>n>>k;
        cin>>up>>dow;
        int fo[2][n],al[2][n];
      
        bool donedown,doneup;
        for(j=n-1;j>=0;j--)
        {
          donedown=0; doneup=0;
                           
          if(dow[j]=='X' && !donedown) {fo[1][j]=0; donedown=1;}
          if(dow[j]=='-' && j+k>n-1 && !donedown) {fo[1][j]=1; cout<<"down"<<j<<" cos case1"<<endl;donedown=1;}
          if(!donedown&& dow[j]=='-' && (fo[0][j+1]==1||fo[0][j+k])) {fo[1][j]=1; cout<<"down"<<j<<" cos case2"<<endl; donedown=1;}
          if(!donedown) {fo[1][j]=0;cout<<"NOT down"<<j<<endl; donedown=1;}
          
          if(up[j]=='X'&&!doneup) {fo[0][j]=0; doneup=1;}
          if(!doneup&& up[j]=='-' && j+k>n-1) {fo[0][j]=1; cout<<"up"<<j<<" cos case1"<<endl; doneup=1;}     
          if(!doneup && up[j]=='-' && (fo[1][j+1]==1||fo[1][j+k])) {fo[0][j]=1; cout<<"up"<<j<<" cos case2"<<endl;doneup=1;}
          if(!doneup) {fo[0][j]=0;cout<<"NOT up"<<j<<endl;doneup=1;}
         
          
          
          
          
          }
          
          cout<<"After step 1"<<endl;
          for(i=0;i<n;i++) cout<<fo[0][i];
          cout<<endl;
          for(i=0;i<n;i++) cout<<fo[1][i];
          
          }//tstcase
          }
          
         
          
          
         
