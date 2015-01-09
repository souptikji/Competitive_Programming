#include<iostream>
using namespace std;
unsigned long long int v[1000][1000];


main()
{
      int tst,last=3; scanf("%d",&tst); 
      v[1][1]=1; v[2][1]=1; v[2][2]=1; v[3][1]=2; v[3][2]=2; v[3][3]=1;      while(tst--){
          
      int N;
      scanf("%d",&N);
      int i,n,k,j;
      
      if(N>last)
    {  //cout<<"\nN is"<<N<<" and last is"<<last;
                for(n=last+1;n<=N;n++)
       // cout<<"\nsum"<<n<<" is"<<sum[n];
               for(k=1;k<=N;k++)
                      { //cout<<"\nvb"<<n<<" "<<k<<" is"<<v[n][k];
                      for(i=k-1;i<n;i++) v[n][k]=(v[n][k]+v[n-1][i])%1000000007;//found answer to v[n][k] 
                      //cout<<"\nv"<<n<<" "<<k<<" is"<<v[n][k];
     }//found ans to sum[n]
      last=N;}
    unsigned long long int sum=0;
    //for(i=1;i<=last;i++) {cout<<endl; for(j=1;j<=last;j++) cout<<"\nFor "<<i<<" stack with top "<<j<<" ans is"<<v[i][j];}
   for(j=1;j<=last;j++) sum+=v[N][j]; 
    cout<<sum%1000000007<<endl;
}//end of testcase
}//end

