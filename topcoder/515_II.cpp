#include<iostream>
#include<vector>
using namespace std;


bool valid(int num)
{
     int alpha;
     while(num>0) { alpha=num%10;
                 
                  if(alpha!=5 && alpha!=8) return 0;
                  num=num/10;}
       return(true) ;
       }                 
     
int getFortunate(vector <int> a, vector <int> b, vector <int> c)
{
 
 int i,j,k,alen=a.size(),blen=b.size(),clen=c.size(),cnt=0,anslen,sum,p;
 bool exists=0;
 vector<int>ans; ans.clear();
 
 for(i=0;i<alen;i++) for(j=0;j<blen;j++) for(k=0;k<clen;k++) {sum=a[i]+b[j]+c[k]; cout<<sum<<" ";
                                                    if(valid(sum)) { cout<<" valid ";
                                                                     anslen=ans.size();
                                                                     exists=0;
                                                                     for(p=0;p<anslen;p++) if(ans[p]==sum) {cout<<"inserted ";exists=1; break;}
                                                                     if(!exists) {cout<<"Not inserted ";ans.push_back(sum);}} 
                                                                     else cout<<"Not valid";}  
 
 
 return(ans.size());
 }//fun


main()
{
      int tst=11;
      while(tst--)
      {
            int alen,blen,clen,i,va;
            vector<int>a; vector<int>b; vector<int>c;
            cin>>alen;
            cin>>blen;
            cin>>clen;   
            for(i=0;i<alen;i++) {cin>>va; a.push_back(va);}   
            for(i=0;i<blen;i++) {cin>>va; b.push_back(va);}   
            for(i=0;i<clen;i++) {cin>>va; c.push_back(va);}   
            cout<<getFortunate(a,b,c)<<endl;



//int nu;
//cin>>nu;
//if(valid(nu)) cout<<"valid"<<endl;
//else cout<<"invalid"<<endl;

            }}
 
                     

