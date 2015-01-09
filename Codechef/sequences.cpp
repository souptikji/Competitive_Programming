#include<iostream>
#include<vector>
using namespace std;

main()
{
      int l;
      for(l=0;l<10;l++)
      {
                       int s,c,j,i;
                       cin>>s>>c;
                       int arr[s+c][10];
                       //initialize arr
                       {for(i=0;i<10;i++)
                       for(j=0;j<s+c;j++)
                       arr[i][j]=0;}//end  of init
                       for(i=0;i<s;i++) cin>>arr[i][0];
                       
                       for(j=1;;j++){
                                     for(i=s-1;i>=j;i--)arr[j][i]=arr[j-1][i]-arr[j-1][i-1];//fill up level j
                                     for(i=s-1;i>=j;i--) if()
                                           
                       
                       
                                           
                       
                       
                       
                       
                       }//end of for
                       }//end
