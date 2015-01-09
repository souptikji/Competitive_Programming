#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      
                  int n,t,i,j,val,cont=0,max;
                  vector<int>p,v,x;
                  cin>>n;
                  for(i=0;i<n;i++){cin>>val;p.push_back(val);x.push_back(val);
                             cin>>val;v.push_back(val);}
                             
                             //end of input and init
                  t=-1;
                  while(p.size()>1){
                                    //cout<<"\np is ";for(i=0;i<n;i++) cout<<p[i]<<" ";
                                    //cout<<"\nv is ";for(i=0;i<n;i++) cout<<v[i]<<" ";
                                    //cout<<"\nx is ";for(i=0;i<n;i++) cout<<x[i]<<" ";
                                    t++;
                                    x[0]=t*v[0];
                                    max=x[0];
                                    
                                    for(i=1;i<n;i++){
                                                     x[i]+=t*v[i];
                                                     if(x[i]>max) max=x[i];
                                                     }//loop ends
                                                     
                                    for(i=0;i<n;i++){
                                                     if(x[i]==max){//cout<<"\nErasing pos"<<p[i];
                                                                   p.erase(p.begin()+i);
                                                                   x.erase(x.begin()+i);
                                                                   v.erase(v.begin()+i);
                                                                   cont++;n--;
                                                                  // cout<<"\ncont is "<<cont;
                                                                  }//end of if
                                                                   }//loop ends
                                                                   
                                                                   }//while ends
                  cout<<cont;
                             
                  
                  
                  }//end
      
