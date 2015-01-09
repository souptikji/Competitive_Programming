#include<iostream>
#include<string>
using namespace std;

long long int f(string pat,string text)
{
    int i,j,num=1,n,m;
    long long int rr;
    m=pat.length();
    n=text.length();
     
    // let n be the size of the text and m the size of the
  // pattern

  for(i = 0; i < n; i++) {
    for(j = 0; j < m && i + j < n; j++) 
      if(text[i + j] != pat[j]) break;
      // mismatch found, break the inner loop
    if(j == m) num++; }// match found
    if(num) {cout<<pat<<endl;
     cout<<text<<endl;
    if(num>1) rr= (num*(num-1))/2; else rr=1;
    //cout<<rr<<endl;
    return rr;}
    
    else return 0;
}
    
main()
{
      int t=5;
      while(t--)
      {
         int i,len,pos,n;
         long long int rr,cnt=0;
           //size_t found;

        
         string s,s2,s3;
         cin>>s;
         cout<<"-------------------------------------------------------"<<endl;
         cout<<"-------------------------------------------------------"<<endl;
         cout<<s<<endl;
         cout<<"-------------------------------------------------------"<<endl;
        // getchar();
         len=s.length();
         for(pos=1;pos<=len-4;pos++)
         for(n=1;n<=(len-3)/2 && pos+2*n<=len-2;n++)
         {
            s2=s.substr(pos,n);
           
            s3=s.substr(pos+n+1,len-pos-n-2);
            
            
            rr= f(s2,s3); 
            
     
      //  if(rr){cout<<rr<<endl;
      //  cout<<"-----------------------------"<<endl;}
      cnt+=rr;
             }
            cout<<"\nCnt is "<<cnt<<endl;
             }
            }
                                    
        
