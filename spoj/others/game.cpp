#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      
                  int q,n,sz,i;
                  double prob,p;
                  cin>>p;
                  vector<double>win;
                  win.push_back(p);
                  sz=1;
                  cin>>q;
                  while(q--)
                  {
                            cin>>n;
                            if(n<=sz) { printf("%.4f\n",win[n-1]);}
                            else
                            {
                                for(i=sz;i<n;i++){// cout<<"\nwin[i-1] is "<<win[i-1]<<endl;
                                                    prob= (win[i-1]*(1-p))+((1-win[i-1])*(p));
                                                    
                                                    win.push_back(prob); 
                                                    //cout<<"\nprob"<<i<<" is"<<win[i]<<" or"<<prob<<endl;
                                                    sz++;}//end of for
                                                    
                                                    printf("%.4f\n",win[n-1]);
                                                    }//end of else
                                                    //printf("%.4f\n",&win[n-1]);
                                                    }//end of all queries
                                                    
                                                    }//end
                                             
