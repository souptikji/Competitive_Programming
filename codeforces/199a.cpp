#include<iostream>
#include<string>
#include<vector>
using namespace std;

main()
{
      
      
      int f[]={0, 1,2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170  };
//CNT IS 45
//int tst=50; while(tst--){
      
      
                  int n,i,j,k;
                  bool found=0;
                  cin>>n;
                  for(i=0;i<45;i++)
                  for(j=0;!found&&j<45;j++)
                  for(k=0;!found&&k<44;k++)
                  if(f[i]+f[j]+f[k]==n) {found=1; cout<<f[i]<<" "<<f[j]<<" "<<f[k]<<endl;break;}
                  
                  if(!found) cout<<"I'm too stupid to solve this problem"<<endl;
                  
              //   } int c;cin>>c;
                  
                  }
