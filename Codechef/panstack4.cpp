#include<cstdio>
#include<iostream>
#define MOD 1000000007
using namespace std;
unsigned long long int cat[1001]={0};
void comp()
{
int i,j;
cat[0]=0;
cat[1]=1;
cat[2]=1;
cat[3]=2;
cat[4]=5;	
for(i=5;i<=1000;i++)
	{
	for(j=1;j<i;j++)
		cat[i]+=(cat[j]*cat[i-j])%MOD;
	cat[i]=cat[i]%MOD;
	}
}
 main()
{
int tst,num;
 cin>>tst;
comp();

while(tst--)
	{
	scanf("%d",&num);
	cout<<cat[num+1]<<endl;
	}
}
