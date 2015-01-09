#include<iostream>
#include<sstream>
#include<cstdio>
using namespace std;

main()
{
      int n,slen,ans=0,i,j,t3=0,t5=0,t8=0;
       string str;
       bool yes=1;
    
      cin>>n;
      getchar();
      while(n--)
      {
               yes=1;
               t3=0;t5=0;t8=0;
                getline(cin,str);
                
               // for(i=0;i<str.length();i++) {if(str[i]==' ') cout<<"BLNK"<<endl;
//                                             else if(str[i]=='\n') cout<<"EOL"<<endl; 
//                                             else if(str[i]=='\0') cout<<"END"<<endl;
//                                             else cout<<str[i]<<endl;}
              //  cout<<"str is "<<str<<endl;
                slen=str.length();
                i=slen-1; while(str[i]==' ') i--;
                for(j=i;j>=0;j--) 
                    {
                    
                     if( str[j]=='8') t8++; 
                     else if(str[j]=='5') t5++;
                     else if(str[j]=='3') t3++;
                    else if( str[j]=='0'||str[j]=='1'||str[j]=='2'|| str[j]=='4'|| str[j]=='6'|| str[j]=='7'|| str[j]=='9') {yes=0; break;}
                    else break;
                    }
                
               // cout<<"table for this is\n";
              // for(i=0;i<10;i++) cout<<i<<" - "<<a[i]<<endl;
                if(yes && t8>=t5 && t5>=t3) {ans++;cout<<"yesss"<<endl;  }
                //cout<<"yesss"<<endl; 
                }//while
                cout<<ans<<endl;
                //int c; cin>>c;
                
                }
                
