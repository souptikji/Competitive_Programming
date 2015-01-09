#include<iostream>
using namespace std;

main()
{
      {
      char c;int i;
      int arr[26];
      for(i=0;i<26;i++) arr[i]=0;
      while(scanf("%c",&c)&&(c!=' ')){
                                 
                                 arr[c-'a']++;
                                 }
      while(scanf("%c",&c)&&(c!='\n')){
                                 
                                 arr[c-'a']=0;
                                 }
      
      for(i=0;i<26;i++)
      {
                       if(arr[i]!=0) printf("%c%d",i+'a',arr[i]);}
                                    
                                    }}
      
