#include<cstdio>
#include<iostream>
using namespace std;




int main() {
    int n, caseno = 0, cases;
   
    scanf("%d", &cases);
    while( cases-- ) {
           int i; 
           int a, b, c, d, e, ff;
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &ff, &n);
        int f[n+1];
        for(i=0;i<=n;i++) f[i]=0;
         f[0]=a;
    f[1]=b;
    f[2]=c;
    f[3]=d;
    f[4]=e;
    f[5]=ff;
    for(i=6;i<=n;i++) f[i]=(f[i-1]+f[i-2]+f[i-3]+f[i-4]+f[i-5]+f[i-6])%10000007;
    
        printf("Case %d: %d\n", ++caseno, f[n]);
    }
    return 0;
}
