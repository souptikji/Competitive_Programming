 #include<iostream>
#define MOD 1000000007
using namespace std;
unsigned long long int v[1000][1000];
unsigned long long int sum[1000];


main()
{
      int tst,last=3; scanf("%d",&tst); 
      v[1][1]=1; v[2][1]=1; v[2][2]=1; v[3][1]=2; v[3][2]=2; v[3][3]=1; sum[0]=0;sum[1]=1; sum[2]=2; sum[3]=5;
      while(tst--){
          
      int N;
      scanf("%d",&N);
      int i,n,k,j;
       if(N<last) cout<<sum[N]<<endl;
       else{
    
                for(n=last+1;n<=N;n++)
        
              { for(k=1;k<=n;k++)
                      { 
                      for(i=k-1;i<n;i++) v[n][k]=(v[n][k]+v[n-1][i])%MOD;//found answer to v[n][k] 
                     
     sum[n]=(sum[n]+v[n][k])%MOD;}}//found ans to sum[n]
      last=N;
      cout<<sum[N]<<endl;}
    
    
   
    //cout<<sum[N]%1000000007<<endl;
}//end of testcase
}//end

