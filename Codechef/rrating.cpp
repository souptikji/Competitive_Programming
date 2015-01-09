#include<iostream>
#include<set>
#include<cstdio>
using namespace std;

main()
{
      long long n,i,ord,el,cnt=0;
      multiset<long long>ms;
      multiset<long long>:: iterator it;
       scanf("%lld",&n);
      while(n--)
      {
           scanf("%lld",&ord);
           if(ord==2) {if(cnt>=3) printf("%lld\n",*it); else  printf("No reviews yet\n"); } 
           else
           {
               scanf("%lld",&el);
               cnt++;
               ms.insert(el);
               if(cnt<3) continue;
               if(cnt==3){
                          it=ms.begin(); it++;it++;}
               
               else if((cnt/3)==((cnt-1)/3)) {if(el>*it) it++;}
               else if(el<*it) it--;
               }
               }//while
               }//end
                                              
                    
                
                
