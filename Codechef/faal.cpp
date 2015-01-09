#include<iostream>
#include<string>
using namespace std;

main()
{
      string s1="0110";
      string s2="0110";
      bool ans= !(1^ (s1==s2));
      cout<<ans<<endl;
      system("pause");
      }
