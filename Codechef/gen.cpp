#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int cnt;
void printbinary(int n)
{
     int bit;
     vector<bool>v; v.clear();
     for(bit=0;bit<9;bit++)  v.push_back(n&(1<<bit));
     reverse(v.begin(),v.end());
     int sum=0;
     for(bit=0;bit<9;bit++) {if(v[bit]==1) sum++; else sum=0;if(sum>=3) break;}
     if(sum>=3){cnt++;
     for(bit=0;bit<9;bit++) cout<<v[bit];cout<<" cnt"<<cnt;cout<<endl;}
     }
     
main()
{
      int num;
      for(num=0;num<(1<<9);num++)
      {
        printbinary(num);
       
        
        }
        cout<<"cnt is "<<cnt<<endl;
        system("pause");
        }
        
