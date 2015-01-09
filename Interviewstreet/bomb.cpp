#include<iostream>
#include<vector>
using namespace std;

main()
{
      int n,m,i,j,del,k,ans,temp;
      cin>>n>>m;
      
      bool eq;
      vector<int>pt;
      vector< vector<int> > v(n,pt); 
      
      for(i=0;i<n;i++)
      for(j=0;j<m;j++)
      {
          cin>>temp;
          if(temp==1) v[i].push_back(j);
          }
     
     del=0;     
     for(i=0;i<n;i++)
     {
        if(v[i].size()==0) del++; //cout<<"\nsize of row"<<i<<" is 0 so del"<<del<<endl;
        else for(j=i-1;j>=0;j--){
                                  if(v[i].size()==v[j].size())
                                  { eq=1;
                                    for(k=0;k<v[j].size();k++) if(v[i][k]!=v[j][k]) {eq=0; break;} 
                                    //if(eq) {del++; cout<<"row"<<i<<" and row"<<j<<" are equal so del"<<del<<endl;}
                                    }//end of if
                                    }//end of else
                                    }//end of for
     ans = n - del;
     cout<<ans<<endl;
     //int c;
     //cin>>c;
     }
        
            
      
      
      
      
