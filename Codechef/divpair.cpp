#include<iostream>
using namespace std;

main()
{
      int tst; scanf("%d",&tst);
      while(tst--)
      {
                  long int n,m,pair1,pair2,num,cnt=0,tar; 
                  int i;
                  scanf("%ld %ld",&n,&m);
                  
         //for(i=1;i*m<=2*n;i++)
//         {
//                         num = i*m;
//                         //cout<<"\nsum is "<<num<<endl;
//                         for(pair1=num/2;pair1>=1;pair1--)
//                         { pair2 = num - pair1; 
//                          if(pair2!=pair1 && pair2<=n) 
//                          {//cout<<pair1<<" "<<pair2<<endl; 
//                           cnt++;}}}
                           
         i=1; num=m; tar=2*n;
         while(1)
         {   num=i*m;
             if(num>tar) break;
             for(pair1=num/2;pair1>=1;pair1--){
                                                pair2 = num - pair1;
                                                 if(pair2!=pair1 && pair2<=n) cnt++;
                                                 else if(pair2>n) break;
                                                 }
                                                 i++;
                                                 }
                                                
                        
           
           printf("%ld\n",cnt);
           }//tstcase
           }//end
