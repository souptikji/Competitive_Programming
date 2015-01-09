#include<iostream>
#include<cstdio>
using namespace std;

void modify(char s[])
{
     int i=0,j,N,alstart,alend,numstart,val;
     while(s[i]>='a' && s[i]<='z') i++;  N=i;
     alstart=1; alend=N-1; numstart=N; val=s[numstart]; numstart++;
     while(alstart<=alend){
                             for(j=alend;j>=alstart;j--) s[j+1]=s[j];
                             alend++; s[alstart]=val; alstart+=2; val=s[numstart]; numstart++;
                             }//end of while
                             cout<<"\Function modify says done\n";
                             }
main()
{
      int t; cin>>t;
      while(t--)
      {
          int n,i;
          cout<<"\nEnter length of string ";
          cin>>n; char s[n];
          cout<<"\nEnter string ";
          for(i=0;i<n;i++) cin>>s[i];
          modify(s);
          cout<<"\nModified string is ";
          for(i=0;i<n;i++) cout<<s[i];
          }////tstcase
          }//end
