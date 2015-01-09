#include <vector>
#include<string>
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
 using namespace std;
 
 class ChessboardPattern
 {
       public:
 vector<string> makeChessboard(int rows, int columns)
 {
          string even="";
          string odd="";
          int i,j;
          vector<string>v;
          for(j=0;j<columns;j++) if(j%2) even+='X'; else even+='.';
          for(j=0;j<columns;j++) if(j%2) odd+='.'; else odd+='X';
          for(i=0;i<rows;i++) if(i%2) v.push_back(even); else v.push_back(odd);
          reverse(v.begin(),v.end());
          return v;
          }
};
          
          
