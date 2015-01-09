#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

main()
{
      int n,i;
      while(cin>>n)
      {
      int a = n/2;
      double gpa;
      vector<double>boy;
      vector<double>girl;
      
      for(i=0;i<a;i++)
      { cin>>gpa; boy.push_back(gpa);}
      
       
      for(i=0;i<a;i++)
      { cin>>gpa; girl.push_back(gpa);}
      
      sort(boy.begin(),boy.end());
      sort(girl.begin(),girl.end());
      double sum=0;
      for(i=0;i<a;i++) sum+=boy[i]*girl[i];
      
      printf("%.4f\n",sum);
      
      
      }}
      
                      
                      
