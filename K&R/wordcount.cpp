#include<iostream>
using namespace std;

bool ischar(char c)
{
     if(c>='a' && c<='z' || c>='A' && c<='Z') return true;
     else return false;
     }

bool isspace(char c)
{
     if(c==' '||c=='\t'||c=='\n') return true;
     else return false;
     }
          
main()
{
      char c;
      bool state=1;
      int word=0;
      while((c=getchar())!=EOF)
      {
          if(isspace(c)&& state==0) {word++; state=1;}
          if(ischar(c)&& state==1) state=0;
          }
          cout<<"Number of words are "<<word<<endl;
          }


//evmurali3
//@gmail.com

//hitavada_bhilai@yahoo.co.in
