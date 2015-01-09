#include<iostream>
using namespace std;

main()
{
      int n,val,xval,yval,right,up,down,left,i,j;
      vector<int>x;vector<int>y;
      
      for(i=0;i<n;i++)
      { cin>>val;
        x.push_back(val);
        cin>>val;
        y.push_back(val);}//end of input
        
      for(i=0;i<n;i++)
      {
                      xval=x[i]; yval=y[i];
                      right=left=up=down=0;
                      
                      for(j=0;j<n;j++)
                      {
                                      if(j!=i)
                                      { if(x[j]>xval && y[j]==yval) right++;
                                        if(x[j]<xval && y[j]==yval) left++;
                                        if(x[j]==xval && y[j]>yval) up++;
                                        if(x[j]==xval && y[j]==yval) down++;
                                        
                      
        
      
                      
