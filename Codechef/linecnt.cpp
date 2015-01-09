#include<iostream>
#include<cstdio>
using namespace std;

main()
{
      int c,cnt=0;
      while((c=getchar())!=EOF){
                                if(c=='\n'){ cnt++; cout<<" CHECKED ";}
                                putchar(c);
                                }
                                cout<<endl;
                                cout<<" \nCOUNT IS "<<cnt;
                                }
