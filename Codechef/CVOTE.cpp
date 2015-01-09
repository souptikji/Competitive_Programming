#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<utility>
using namespace std;

main()
{
      //int tst=100; while(tst--){
      int n,m,i;
      cin>>n>>m;
      string prsn;
      string desh;
      map<string,string>prsn2desh;
      map<string,int>desh2votes;
      map<string,int>prsn2votes;
      map<string,int>::iterator name2num;
      map<string,string>::iterator name2name;
      
      for(i=0;i<n;i++) {cin>>prsn;
                        cin>>desh; 
                        prsn2desh.insert(pair<string,string>(prsn,desh));
                        if(desh2votes.find(desh)==desh2votes.end()) desh2votes.insert(pair<string,int>(desh,0));
                        prsn2votes.insert(pair<string,int>(prsn,0));
                        }
      
      

    int country=-1,scien=-1;
    string windesh,winpr;
    for(i=0;i<m;i++)
    {
       cin>>prsn;
       prsn2votes[prsn]++;
       if(prsn2votes[prsn]>scien) {scien=prsn2votes[prsn]; winpr=prsn;}
       else if(prsn2votes[prsn]==scien && prsn<winpr) winpr=prsn;
       desh=prsn2desh[prsn];
       desh2votes[desh]++;
       if(desh2votes[desh]>country) {country=desh2votes[desh]; windesh=desh;}
       else if(desh2votes[desh]==country && desh<windesh) windesh=desh;
       }
    
    cout<<windesh<<endl<<winpr<<endl;
    
    //cout<<"output1\n";
//      cout<<"prsn2desh\n";
//      for(name2name=prsn2desh.begin();name2name!=prsn2desh.end();name2name++)     cout <<(*name2name).first << " => " << (*name2name).second << endl;
//      cout<<"\nprsn2votes\n";
//      for(name2num=prsn2votes.begin();name2num!=prsn2votes.end();name2num++)     cout <<(*name2num).first << " => " << (*name2num).second << endl;
//      cout<<"\ndesh2votes\n";
//      for(name2num=desh2votes.begin();name2num!=desh2votes.end();name2num++)     cout <<(*name2num).first << " => " << (*name2num).second << endl;
//  

}//remove 1 when final
    

