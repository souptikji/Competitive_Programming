/* Big mod */
#include<cstdio>
using namespace std;
unsigned long long square(unsigned long long s){
return s*s;
}
unsigned long long bigmod(unsigned long long b, unsigned long long p){
if (p == 0)
return 1;
else if (p%2 == 0)
return square( bigmod (b,p/2)) ; // square(x) = x * x
else
return ((b ) * bigmod( b,p-1)) ;
}
int main(){
unsigned long long  b,p,m,sum,y,temp;
while(scanf("%u %u",&b,&p)){sum=0;
y = bigmod( b, p);

temp=y;
   while(temp>0)
   {
                sum=sum+(temp%10);
                temp=temp/10;}
printf("%ld\n%ld",y, sum);
}
return 0;}

