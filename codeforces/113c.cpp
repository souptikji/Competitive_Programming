#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int modd(int x)
{
    if(x>=0) return x;
    else return -x;
}
main()
{
      
      
                   
      int n,x,val,i,j,pos,med,af=0,b4=0,xpres=0;
      vector<int>v;
      vector<int>p;
      
      cin>>n>>x;
      for(i=0;i<n;i++){ cin>>val;if(val==x){xpres=1;} v.push_back(val);}
     
      if(xpres==0) {v.push_back(x); n++;}
      sort(v.begin(),v.end());
      //cout<<"Sort done";
   // for(i=0;i<n;i++) cout<<" "<<v[i];
      
      
      med=((n+1)/2)-1;
      if(v[med]==x) {if(xpres==1)cout<<"0"<<endl; else cout<<"1"<<endl;}
      //else if(x<v[1]) cout<<"\nsabse pehle "<<v.size();
      //else if(x>v[n]) cout<<"\nsabse baad "<<v.size()+1;
      else{
           for(i=0;i<n;i++) {if(v[i]<x) b4++;
                             else if(v[i]==x) p.push_back(modd(med-i));
                             
                             else{ af++;} }
           //cout<<"\np vector done";
          // for(i=0;i<p.size();i++) cout<<" "<<p[i];
          
          
           {int clos=p[0];
           for(i=1;i<n;i++) if(p[i]<clos) clos=p[i];
           //cout<<"\nclos is "<<clos;
           
           if(v[clos]<v[med]){
                              //pos=clos; 
                              b4+=p.size()-1;
                              }
           else{
                //pos=clos;
                af+=p.size()-1;}   
                
              // cout<<"\nBefor "<<b4<<" and after "<<af<<endl;
                if(b4<af) {if(xpres==1)cout<<af-b4-1; else cout<<af-b4;}
                else {if(xpres==1)cout<<b4-af; else cout<<b4-af+1;}
                }}
                
            //  cout<<"\nSab ant ";
              //int c; cin>>c;
              
                
                  
                 
           }//end 
      
