#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

main()
{
     int n;
     while(cin>>n)
     {
        if(n==0) break;
        stack<int>s;
        stack<int>s2;
        s.push(-1);s2.push(-1);
        int i,num,cnt=0;
        
        i=1;
        while(1){  if((s2.top()!=i)&&(cnt==n)) break;
                   if(s2.top()==i){
                                   s.push(s2.top());
                                   s2.pop();
                                   i++;
                                   }
                   else{
                        cin>>num;cnt++;
                        if(num==i) {s.push(i);i++;}
                        else s2.push(num);
                        }
                        }//end of while
        
        if(s2.top()==-1) cout<<"yes\n";
        else cout<<"no\n";
        
        while(!s.empty()) s.pop();
        while(!s2.empty()) s2.pop();
        
        }//end of testcase
        }//end
        
                     
