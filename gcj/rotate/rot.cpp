#include<iostream>
using namespace std;

main()
{
      int tst,t;
      cin>>tst;
      for(t=1;t<=tst;t++)
      {
         int n,k,i,j,l,c,row,col,maxcol,rowhasit;
         cin>>n>>k;
         char ac[n][n];
         
         row=0; maxcol=0;
         for(i=0;i<n;i++)
         { rowhasit=0; col=0;
           for(j=0;j<n;j++){
                             c=getchar();
                             if(c!='.'){ putchar(c);
                                         if(rowhasit==0){ rowhasit=1;
                                                          row++;}//found the 1st of row
                                         col++;
                                                }//end of if(c!='.')
                             else cout<<"0";
                                                }//end of row's computations
             cout<<"   Rows="<<row;
             
             if(col>maxcol) maxcol=col;
             }//end of input
             
           cout<<"\nRows are "<<row<<" and maxcol is "<<maxcol<<endl; 
                                                         
                           
     
        
                                       
         
         
         
         }//end of tstcase
         }//end 
            
            
         
