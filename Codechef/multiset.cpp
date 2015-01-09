#include<iostream>
#include<set>
using namespace std;

main()
{
      int tst=100,n,m;
      while(tst--)
      {
                  multiset<int> ms;
                  multiset<int>:: iterator it,temp;
                  cout<<"\nEnter the number of elements ";
                  cin>>n;
                  
                  while(n--)
                  {
                            cin>>m;
                            ms.insert(m);
                            
                            }
         cout<<"basic testing"<<endl;
         it=ms.begin();
         cout<<*it<<endl;
         it++;
          cout<<*it<<endl;
         it--;         
          cout<<*it<<endl;
         
           multiset<int>::reverse_iterator rit;
           cout<<"Reverse"<<endl;
           for(rit=ms.rbegin();rit!=ms.rend();rit++) cout<<*rit<<" ";
           cout<<"Forward"<<endl;
           for(it=ms.begin();it!=ms.end();it++) cout<<*it<<" ";            
                             }}
      
