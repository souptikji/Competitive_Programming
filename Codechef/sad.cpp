#include<iostream>
#include<vector>
using namespace std;

main()
{
      //int tst=100;
      //while(tst--)
      //{
          int r,c,i,j,row,col,rowmin,colmax;
          bool found=0;
          vector<int>rowmins;
          rowmins.clear();
          cin>>r>>c;
          int ar[r][c]; 
         
          for(i=0;i<r;i++) for(j=0;j<c;j++) cin>>ar[i][j];
         
          
          
          for(row=0;row<r;row++)
          {
              rowmin=0;
              for(col=1;col<c;col++)
              if(ar[row][col]<ar[row][rowmin]) rowmin=col;
             // cout<<"For row"<<row<<" the min"<<ar[row][rowmin]<<" is found at col"<<rowmin<<endl;
              rowmins.push_back(rowmin);
              }
          
          for(col=0;col<c;col++)
          {
               colmax=0;
               for(row=1;row<r;row++)
               if(ar[row][col]>ar[colmax][col]) colmax=row;   
               //cout<<"For col"<<col<<" the max"<<ar[colmax][col]<<" is found at row"<<colmax<<endl;
               if(rowmins[colmax]==col) {found=1; cout<<ar[colmax][col]<<endl; break; }   
               }
               
               if(!found) cout<<"GUESS"<<endl;
               
              // }//tstcase
               }//end                  
