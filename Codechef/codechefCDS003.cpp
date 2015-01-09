#include<iostream>
#include<cstdio>
using namespace std;

main()
{
      int tst;
      cin>>tst;
      while(tst--){
                   char c,ca,cb;int d;
                   while((c=getchar())!='\n'){
                                              if(c=='1'){
                                                         ca=getchar();
                                                         cb=getchar();
                                                         d = (cb-'0')+(10*(ca-'0'))+(100*(c-'0'));
                                                         printf("%c",d);
                                                         }
                                                         
                                              else{
                                                   ca=getchar();
                                                   d = (ca-'0')+(10*(c-'0')); 
                                                    printf("%c",d);
                                                    }
                                                    }//end of inner while
                                                    }//end of outer while
                                                    }//end                                                  
                   
                                                         
