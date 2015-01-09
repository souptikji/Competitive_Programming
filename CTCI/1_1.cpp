#include<iostream>
using namespace std;

main()
{
      int tst;
      cin>>tst;
      while(tst--)
      {
        char str[100];
        int code=0,i,dis;
        bool no=0;
        scanf("%s",&str);
        for(i=0;str[i]!='\0';i++) {
                                   dis=str[i]-'a';
                                   if(code&(1<<dis)) {no=1; break;}
                                   else code=code|(1<<dis);
                                   }
        if(no) cout<<"Not all unique"<<endl;
        else cout<<"All unique\n";
        }
}
