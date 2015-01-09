#include<iostream>
#include<string>
#include<vector>
using namespace std;

string describeIntersection(vector <int> A, vector <int> B)
{
     int allx=A[0], ally=A[1], alrx=A[2], alry=A[1], aulx=A[0], auly=A[3], aurx=A[2], aury=A[3]; 
     int bllx=B[0], blly=B[1], blrx=B[2], blry=B[1], bulx=B[0], buly=B[3], burx=B[2], bury=B[3];
     
     if((aulx <= blrx) &&
        (auly >= blry) &&
        (alrx >= bulx) &&
        (alry <= buly))  return "rectangle";
     
     
     else if( (allx==bllx && ally==blly) || (allx==blrx && ally==blry) || (allx==bulx && ally==buly) || (allx==burx && ally==bury)
             ||(alrx==bllx && alry==blly) || (alrx==blrx && alry==blry) || (alrx==bulx && alry==buly) || (alrx==burx && alry==bury)  
             ||(aulx==bllx && auly==blly) || (aulx==blrx && auly==blry) || (aulx==bulx && auly==buly) || (aulx==burx && auly==bury)
             ||(aurx==bllx && aury==blly) || (aurx==blrx && aury==blry) || (aurx==bulx && aury==buly) || (aurx==burx && aury==bury) )
      return "point";
      
      
     else if( buly==ally || auly=blly || bllx==alrx || allx==blrx ) return "segment";
     else return "none";
     
     
      }   
      
      
main()
{
      vector<int>A;
      vector<int>B;
      
