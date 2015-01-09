#include<iostream>
using namespace std;

main()
{
      int tst; cin>>tst; getchar();
      while(tst--)
      {
                  
          char c;
          int arr[52],cnt=0,i;
          for(i=0;i<52;i++) arr[i]=0;
          while((c=getchar())!='\n') 
          { if(c>='A' && c<='Z' ) arr[c-'A']++;
             else arr[c-6-'A']++;   }
             
             
          
          while((c=getchar())!='\n')
          { if(c>='A' && c<='Z' ) { if(arr[c-'A']) cnt++;}
             else   if(c>='a' && c<='z' ) { if(arr[c-6-'A']) cnt++;}
             }
              
              cout<<cnt<<endl;
              
             
             }//end of tstcase
             }//end
