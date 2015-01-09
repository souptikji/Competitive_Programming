#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

main()
{
      stack<char>s,s1;
      s.push('Z');
      char x,c;
      while((c=getchar())!='\n')
      {
          if(s.top()==c) s.pop();
          else s.push(c);
          };
      
      while(!s.empty())
      {
         x = s.top();
         if(x!='Z') s1.push(x);
         s.pop(); }
      
      while(!s1.empty()) { cout<<s1.top(); s1.pop();}
      
      }
