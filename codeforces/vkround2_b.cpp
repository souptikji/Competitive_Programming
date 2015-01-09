#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{ 
      
                  char c;
                  int asz,ssz=0,num,i,j,pre;
                  vector<int>a;
                  int s[10]={0};
                  while((c=getchar())!='\n') a.push_back(c-'0');
                  while((c=getchar())!='\n') {s[c-'0']++ ; ssz++;}
                 // sort(s.begin(),s.end());
                  
                  asz=a.size();pre=0;
                  
                  
                  for(i=9;i>=0;i--)
                  {
                                   for(j=pre;(j<asz)&&(s[i]>0);j++){
                                                        if(i>a[j]) {a[j]=i;s[i]--;}}
                                                        pre=j;
                                                        }//end of for
                                                                      
                                   
                                   
                  
                  for(i=0;i<asz;i++) cout<<a[i];
                  cout<<endl;
                  
                  //end of tstcase
                  }//end
