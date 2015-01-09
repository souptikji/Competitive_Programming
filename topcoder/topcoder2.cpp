#include<iostream>
#include<string>
using namespace std;

  double getEfficiency(string profit[])
  {
     int i,j,len;
     double eff,sum=0.0,cnt=0;
     string s=profit[0]; len=s.length();
     
     for(i=0;i<len;i++)
     {
       s=profit[i];
       for(j=0;j<len;j++){if(s[j]!='0') {cnt+=1.0; sum+=(s[j]-'0');}}
       }
      eff=sum/cnt;
      return eff;
      }
   
  
main()
  {
        
    string profit[3];
  profit[0]="071";
  profit[1]="702";
  profit[2]="120";
  
  
  double f = getEfficiency(profit);
  cout<<f<<endl;
  int c;
  cin>>c;
}
                          
     
