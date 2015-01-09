#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

long long int arr[71][71]; //initialize arr[0][0] to arr[71][71] to zero

long long int binomial(int x,int y){

    if(arr[x][y]) return arr[x][y];//if xCy has a nonzero value->it has already been computed->return value
    int i,j;//counter

    //loop for computation of binomial from 1c1 to xcy
    for(i=1;i<=x;i++){
         for(j=0;j<=min(i,y);j++){
               if(i==j||j==0) arr[i][j]=1;
               else arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
         }
         }//endfor
    return arr[x][y];
}


//driver code to run binomial (x,y))
int main(){
    bool grtr[71][71];
    int i,j;
    for(i=1;i<71;i++)
        {for(j=1;j<71;j++) if(binomial(i,j)>70) cout<<"0"; else cout<<"1";
        cout<<endl;
    }
}
