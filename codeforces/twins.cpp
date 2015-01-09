#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool myfunction (int i,int j) { return (i>j); }

main()
{
      
                  int no,val,sum=0,rem,me,i,j;
                  
                  //start inputting
                  cin>>no;
                  vector<int>coins;
                  for(i=0;i<no;i++){
                                    cin>>val;
                                    sum+=val;
                                    coins.push_back(val);
                                    }//end of input
                                    
                  sort(coins.begin(),coins.end(),myfunction); //sorting routine
                  i=0;me=0;rem=sum;
                  while(me<=rem){
                                 me+=coins[i];
                                 i++;
                                 rem=sum-me;
                                 }
                  
                  cout<<i<<endl;
                  
                 
                  }//end of program
