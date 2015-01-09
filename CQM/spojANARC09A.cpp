#include<iostream>
#include<stack>
using namespace std;
main()
{
  stack<int>S;
  int i=0,cost;char c;
  int change=0,count=0;
  //cout<<"\nCase#"<<i<<", initial change"<<change<<" and initial count"<<count<<endl;  
  while((c=getchar())!='-')
  {
  if(c=='\n')              
  {
                           cost=change+(count/2); i++;        
                           printf("%d. %d\n",i,cost);
                           change=0,count=0;
                           //cout<<"\nCase#"<<i<<", initial change"<<change<<" and initial count"<<count<<endl;
                           while(!S.empty())  S.pop();} 
  
    else if(c=='}'&&S.empty())
           {c='{';
            S.push(c);
            count++;
            change++;
            //cout<<"\nReceived "<<c<<" and stack is empty , so count"<<count<<" and change"<<change<<endl;
            }

    else if(c=='}'&&!S.empty())
           {count--;
           S.pop();
           //cout<<"\nReceived "<<c<<" and stack is not empty , so count"<<count<<" and change"<<change<<endl;
           }

    else if(c=='{')
          {count++;
          S.push(c);
          //cout<<"\nReceived "<<c<<" so count"<<count<<" and change"<<change<<endl;
          }

         

}}

