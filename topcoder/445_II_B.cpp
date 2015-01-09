#include<iostream>
#include<vector>
using namespace std;


  int count(vector <int> x, vector <int> y)
  {
    bool north=0,south=0,east=0,west=0,norsou=0,eswes=0;
    int oth,len,num=0,xcurr,ycurr,xmax,xmin,ymax,ymin,i;
    len=x.size();
    
    xmax=-100; ymax=-100; xmin=100; ymin=100;
    for(i=0;i<len;i++){ if(x[i]>xmax) xmax=x[i];
                        if(x[i]<xmin) xmin=x[i]; 
                        if(y[i]>ymax) ymax=y[i];
                        if(y[i]<ymin) ymin=y[i]; }
    
    cout<<"xmax "<<xmax<<" and ymax "<<ymax<<endl;
    
   //iterating for curr
    for(xcurr=xmin;xcurr<=xmax;xcurr++)
    for(ycurr=ymin;ycurr<=ymax;ycurr++)
    {   
        north=0; south=0; east=0; west=0; norsou=0; eswes=0;
        cout<<"Curr("<<xcurr<<" , "<<ycurr<<")"<<endl;
        
        //iterating over others
        for(oth=0;oth<len;oth++)
        {
         if(!norsou && x[oth]==xcurr) { if(y[oth]>ycurr) {north=1; cout<<"Oth("<<xcurr<<" , "<<ycurr<<") ->North"<<endl;}
                                        else if(y[oth]<ycurr) {south=1; cout<<"Oth("<<xcurr<<" , "<<ycurr<<") ->South"<<endl;}
                                        if(north&&south) {norsou=1;cout<<"North and south complete"<<endl;}}
         if(!eswes && y[oth]==ycurr) { if(x[oth]>xcurr) {east=1; cout<<"Oth("<<xcurr<<" , "<<ycurr<<") ->East"<<endl;}
                                        else if(x[oth]<xcurr) {west=1; cout<<"Oth("<<xcurr<<" , "<<ycurr<<") ->West"<<endl;}
                             if(east&&west) {eswes=1;cout<<"East and west complete"<<endl;}}
         if(eswes&&norsou){ cout<<"All complete"<<endl;break;}}
         //end of iterating over others
         
         if(norsou&&eswes) {num++;cout<<"New num is"<<num<<endl;}
         }
         //end of iterating for curr
         
         return num;
         }//end of fun
        
                        
 
 main()
 {
       vector<int>x ;
       vector<int>y;
       int tst=60,n,v,i;
       while(tst--)
       {
            x.clear();
            y.clear();
            cout<<"No. of city? ";
            cin>>n;
            cout<<"Push x ";
            for(i=0;i<n;i++) {cin>>v; x.push_back(v);}  
            cout<<"Push y ";
            while(n--) {cin>>v; y.push_back(v);}
            cout<<"end of push"<<endl;     
         
          v=count(x,y);
          cout<<"ANSWER is "<<v<<endl;
          }}
         
          
  
