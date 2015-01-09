#include<iostream>
#include<vector>
using namespace std;

main()
{
      int n,sz,i;
      
      while(cin>>n)
      {
                   vector<int>v;
                   vector<int>num;
                   vector<int>den;
                   sz=0;
                   if(n==0) break;
                   
                       while(n>0) {v.push_back(n); sz++;
                                    if(n==1)
                                   {num.push_back(1);
                                    den.push_back(1);}
                                    else{ 
                                    num.push_back(0);
                                    den.push_back(0);}
                                    n/=2;
                                    }//end of while
                                    
                      // cout<<"V is ";
//                       for(i=0;i<sz;i++) cout<<v[i]<<" ";
//                       cout<<"\nNum is ";
//                       for(i=0;i<sz;i++) cout<<num[i]<<" ";
//                       cout<<"\nDen is ";
//                       for(i=0;i<sz;i++) cout<<den[i]<<" ";
                       
                       
                       for(i=v.size()-2;i>=0;i--){
                                         if(v[i]==2*v[i+1]+1){
                                                        num[i]=num[i+1]+den[i+1];
                                                        den[i]=den[i+1];
                                                        }
                       else
                       if(v[i]==2*v[i+1]){
                                                        den[i]=num[i+1]+den[i+1];
                                                        num[i]=num[i+1];
                                                        }}
                       //
//                         cout<<"V is ";
//                       for(i=0;i<sz;i++) cout<<v[i]<<" ";
//                       cout<<"\nNum is ";
//                       for(i=0;i<sz;i++) cout<<num[i]<<" ";
//                       cout<<"\nDen is ";
//                       for(i=0;i<sz;i++) cout<<den[i]<<" ";
                       
                       
                       cout<<num[0]<<"/"<<den[0]<<endl;
                       }//end of tstcase
                       }//end
                                         
                       
