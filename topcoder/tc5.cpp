#include<iostream>
using namespace std;

int max(int a,int b)
{
    if(b>a) return b;
    else return a;
}

int min(int a,int b)
{
    if(b<a) return b;
    else return a;
}




void getCount(int maxR, int maxG, int maxB, int startR, int startG, int startB, int d1, int d2)
{
    
    int R,G,B,i,j,k;
    long long int ans;
    bool done[maxR][maxG][maxB];
    for(i=0,j=0,k=0;i<maxR,j<maxG,k<maxB;i++,j++,k++) done[i][j][k]=0;
    
    ans=0;
    
     
     
     
     for(R=max(startR-d2,0);R<=min(startR+d2,0);R++) 
    for(G=max(startG-d2,0);G<=min(startG+d2,maxG);G++)
    for(B=max(startB-d2,0);B<=min(startB+d2,maxB);B++)
    if((R>=startR+d1 || R<=startR-d1) && (done[R][G][B]==0))  {ans++; done[R][G][B]=1; cout<<"Value is R"<<R<<" G"<<G<<" B"<<B<<endl;}
    else cout<<"NO R"<<R<<" G"<<G<<" B"<<B<<endl;
    
    for(R=max(startR-d2,0);R<=min(startR+d2,0);R++) 
    for(G=max(startG-d2,0);G<=min(startG+d2,maxG);G++)
    for(B=max(startB-d2,0);B<=min(startB+d2,maxB);B++)
    if((G>=startG+d1 || G<=startG-d1) && (done[R][G][B]==0))  {ans++; done[R][G][B]=1; cout<<"Value is R"<<R<<" G"<<G<<" B"<<B<<endl;}
     else cout<<"NO R"<<R<<" G"<<G<<" B"<<B<<endl;
     
    for(R=max(startR-d2,0);R<=min(startR+d2,0);R++) 
    for(G=max(startG-d2,0);G<=min(startG+d2,maxG);G++)
    for(B=max(startB-d2,0);B<=min(startB+d2,maxB);B++)
    if((B>=startB+d1 || B<=startB-d1) && (done[R][G][B]==0))  {ans++; done[R][G][B]=1; cout<<"Value is R"<<R<<" G"<<G<<" B"<<B<<endl;}
     else cout<<"NO R"<<R<<" G"<<G<<" B"<<B<<endl;
     
    //////////////////////// 
     //for(R=max(startR-d2,0);R<=max(startR-d1,0);R++) 
//    for(G=max(startG-d2,0);G<=min(startG+d2,maxG);G++)
//    for(B=max(startB-d2,0);B<=min(startB+d2,maxB);B++)
//    if(!done[R][G][B])  {ans++; done[R][G][B]=1; cout<<"Value is R"<<R<<" G"<<G<<" B"<<B<<endl;}
//    
//    for(R=min(startR+d1,maxR);R<=min(startR+d2,maxR);R++)
//    for(G=max(startG-d2,0);G<=min(startG+d2,maxG);G++)
//    for(B=max(startB-d2,0);B<=min(startB+d2,maxB);B++)
//    if(!done[R][G][B]) {ans++; done[R][G][B]=1;cout<<"Value is R"<<R<<" G"<<G<<" B"<<B<<endl;}
//    
//     for(G=max(startG-d2,0);G<=max(startG-d1,0);G++) 
//    for(R=max(startR-d2,0);R<=min(startR+d2,maxR);R++)
//    for(B=max(startB-d2,0);B<=min(startB+d2,maxB);B++)
//    if(!done[R][G][B]) {ans++; done[R][G][B]=1;cout<<"Value is R"<<R<<" G"<<G<<" B"<<B<<endl;}
//    
//     for(G=(startG+d1,maxG);G<=min(startG+d2,maxG);G++)
//     for(R=max(startR-d2,0);R<=min(startR+d2,maxR);R++)
//    for(B=max(startB-d2,0);B<=min(startB+d2,maxB);B++)
//    if(!done[R][G][B]) {ans++; done[R][G][B]=1;cout<<"Value is R"<<R<<" G"<<G<<" B"<<B<<endl;}
//    
//     for(B=max(startB-d2,0);B<=max(startB-d1,0);B++)
//      for(G=max(startG-d2,0);G<=min(startG+d2,maxG);G++)
//    for(R=max(startR-d2,0);R<=min(startR+d2,maxR);R++)
//    if(!done[R][G][B]) {ans++; done[R][G][B]=1;cout<<"Value is R"<<R<<" G"<<G<<" B"<<B<<endl;}
//    
//     for(B=min(startB+d1,maxB);B<=min(startB+d2,maxB);B++)
//     for(G=max(startG-d2,0);G<=min(startG+d2,maxG);G++)
//    for(R=max(startR-d2,0);R<=min(startR+d2,maxR);R++)
//    if(!done[R][G][B]) {ans++; done[R][G][B]=1;cout<<"Value is R"<<R<<" G"<<G<<" B"<<B<<endl;}
    
      //return ans;
      cout<<"ANS IS "<<ans<<endl;
}
   
   
main()
{
      int maxR,maxG,maxB,startR,startG,startB,d1,d2;
      int tst=6;
      while(tst--)
      {
      cin>>maxR;
      cin>>maxG;
      cin>>maxB;
      cin>>startR;
      cin>>startG;
      cin>>startB;
      cin>>d1;
      cin>>d2;
      getCount(maxR,maxG,maxB,startR,startG,startB,d1,d2);
      }
      }
      
