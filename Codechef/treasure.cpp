#include<iostream>
#include<vector>
using namespace std;

main()
{
      int i,j,row,col,data;
      vector<int>v;
      int arr[6][6];
     int found=0;
      
      for(i=1;i<6;i++){
      for(j=1;j<6;j++)
      {
            cin>>arr[i][j];
            row=arr[i][j]/10;
            col=arr[i][j]%10;
            if(row==i&&col==j) found=1;
            
            }}
            
 if(found==0) cout<<"NO TREASURE";
 else
 {
     i=1;j=1;
     v.push_back(11);
     while(true)
     {
        data=arr[i][j];
        row=data/10;
        col=data%10;
        if(row==i&&col==j) break;
        else{
             v.push_back(data);
             i=row;
             j=col;
             }
             }//end of while
     
      vector<int>::iterator it;

  
  for ( it=v.begin() ; it<v.end(); it++ )
  {data=*it;
  row=data/10;
        col=data%10;
    cout<<row<<" "<<col<<endl;
}//end of printing
      
      }
    
}//end of program
