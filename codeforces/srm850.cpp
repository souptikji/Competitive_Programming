#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class TheSimilarNumbers
{
public:
int find(int lower, int upper) 
{
     int cnt,maxcnt,i,j;
     maxcnt = 1;
     for ( i=lower; i<= upper; i++)
     {   cnt =1;
         for( j = i; j<=upper; j = 10*j+1)
              cnt++;
         maxcnt = max(maxcnt, cnt);
     }
     return maxcnt;
 }// fun
 }
 int main()
 {
     TheSimilarNumbers ob;
     return 0;
     
 }
