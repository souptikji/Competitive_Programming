#include<iostream>
using namespace std;

main()
{
      int tst,t;
      cin>>tst;
      for(t=1;t<=tst;t++)
      {
         int n,k,i,j,l,c;
         cin>>n>>k;
         char ac[n][n];
         
         for(i=0;i<n;i++)
         {
         {for(j=0;j<n;j++) cin>>ac[j][n-1-i];}
         getchar();
         }
         
         cout<<"\nEnd of input."<<endl; 
         for(i=0;i<n;i++)
         { cout<<endl;
           for(j=0;j<n;j++) cout<<ac[i][j];}
           
         cout<<"\nEnd of output."<<endl;
         
         
         for(i=0;i<n;i++)
         {
            for(j=0;j<n;j++)
            if(!(ac[i][j]=='.')&&(ac[i+1][j]=='.')) 
            { ac[i+1][j]=ac[i][j];
              ac[i][j]='.';}}
            
            //cout<<"\nAfter Gravity "<<endl;
//            for(l=0;l<n;l++)
//             for(i=0;i<n;i++)
//         { cout<<endl;
//           for(j=0;j<n;j++) cout<<ac[i][j];}
//           
//         cout<<"\nEnd of output."<<endl;
//                                
         
         
         
         }//end of tstcase
         }//end 
            
            
         
