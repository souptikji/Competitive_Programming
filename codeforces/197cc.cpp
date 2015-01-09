#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

main()
{
    int i,vsz,m,prev=-1,q1sum=0,q2sum=0;
    bool bit,pushed=0,sorry=0;
    vector<int>v;
    queue<int>q1;
    queue<int>q2;
    string s;
    cin>>s;
    for(i=0;i<10;++i)
    {

        if(s[i]=='1') v.push_back(i+1);
    }
    vsz=v.size();
    cin>>m;
    while(1)
    {
        for(i=0;i<vsz;i++)
        {
            //cout<<"ola "<<i<<endl;
            if(i!=prev && q1sum+v[i]>q2sum)
            {
                q1.push(v[i]);
                q1sum+=v[i];
                pushed=1;
                prev=i;
                m--;
                break;
            }//if
            else pushed=0;
        }//for

  // cout<<"khatam 1"<<endl;
            if(!pushed)
            {
                sorry=1;
               // cout<<"\nsorry\n";
                break;
            }//if

            if(m==0) break;
            ////////////////
            for(i=0;i<vsz;i++)
        {  // cout<<"ola "<<i<<endl;
            if(i!=prev && q2sum+v[i]>q1sum)
            {
                q2.push(v[i]);
                q2sum+=v[i];
                pushed=1;
                prev=i;
                m--;
                break;
            }//if
            else pushed=0;
        }//for

            if(!pushed)
            {
                sorry=1;
                //cout<<"\nsorry\n";
                break;
            }//if

            if(m==0) break;

//cout<<"khatam 2"<<endl;


    }//while

    if(sorry) cout<<"NO"<<endl;
    else
    {
        //debug
//    cout<<"q1"<<endl;
//    while(!q1.empty()) {cout<<q1.front()<<" "; q1.pop();}
//    cout<<"\nq2"<<endl;
//    while(!q2.empty()) {cout<<q2.front(); q2.pop();}



        cout<<"YES"<<endl;
        while(!(q1.empty()&&q2.empty()))
        {
            if(!q1.empty())
            {
                cout<<q1.front()<<" ";
                q1.pop();
            }
            if(!q2.empty())
            {
                cout<<q2.front()<<" ";
                q2.pop();
            }
         }//while
    }//else
}//end
