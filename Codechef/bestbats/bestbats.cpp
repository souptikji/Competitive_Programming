#include<iostream>
using namespace std;


main()
{
      
int scr[101]; 
int tst,i,j,k,scor,num,dif,ans; 
bool cmp;                            
int bc[12][12] = { 
{ 1, 0, 18, 4063232, 21264904, 2292764, 2293096, 2293152, 1999951693, 5396952, 2293056, 4487853},
{ 1, 1, 2293016, 4273268, 4487853, 2293056, 256, 0, 2293032, 1992042784, 10, 2293060},
{ 1, 2, 1, 1, 0, 2293056, 1991418946, 1992033472, 2293068, 1991439173, 17, 2293128},
{ 1, 3, 3, 1, 4487568, 2293209, 7, 1, 2293084, 926299444, 2293700, 1991544021},
{ 1, 4, 6, 4, 1, 1, 1, 1992042784, 2293200, 4487568, 2293288, 4304757},
{ 1, 5, 10, 10, 5, 1, 2293288, 4304608, 2293271, 4470400, 926168298, 943272504},
{ 1, 6, 15, 20, 15, 6, 1, 4, 0, 2293264, 1991418946, 1992033472},
{ 1, 7, 21, 35, 35, 21, 7, 1, 0, 0, 4, 2},
{ 1, 8, 28, 56, 70, 56, 28, 8, 1, 1, 2, 1992042784},
{ 1, 9, 36, 84, 126, 126, 84, 36, 9, 1, 4469904, 0},
{ 1, 10, 45, 120, 210, 252, 210, 120, 45, 10, 1, 1991446882},
{ 1, 11, 55, 165, 330, 462, 462, 330, 165, 55, 11, 1}
};

cin>>tst;

while(tst--)
{
            for(i=0;i<101;i++) scr[i]=0;
            for(i=0;i<11;i++) {cin>>scor; scr[scor]++;}
            cin>>k; num=0; cmp=1;
            for(j=100;j>=0;j--)
            {
               if(scr[j]){
                //cout<<"\nfor score"<<j<<" num+scr[j] is"<<num+scr[j]<<endl;
                if(num+scr[j]<k) num=num+scr[j];
                else if(num+scr[j]==k) {cmp=0;break;}
                else {
                      dif=(num+scr[j]-k);
                      ans= bc[scr[j]][dif];
                      break;
                      }}
                      }//end of for
                
                if(cmp==0) ans=1;
                cout<<ans<<endl;
                }//end of tstcase
                }//end
                
            
