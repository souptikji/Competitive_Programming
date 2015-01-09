#include<iostream.h>
#include<stdio.h>
#include<string.h>


bool is(char str[],int fir,int las)
{
     if(fir==las) return true;
     if(las==fir+1 && str[fir]==str[las]) return true;
     if(str[fir]==str[las]&& is(str,fir+1,las-1)==true) return true;
     else return false;
     }

main()
{
      int t;cin>>t;
      while(t--)
      {
         int n;
         char str[100];
         scanf("%s",&str);
         n=strlen(str)-1;
         if(is(str,0,n)) cout<<"\nTRUE"<<endl;
         else cout<<"FALSE"<<endl;
         }
         }
         
