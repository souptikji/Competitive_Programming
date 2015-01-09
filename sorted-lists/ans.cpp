#include<iostream>
#include<fstream>
#include<string>
#include<utility>
#include<queue>

using namespace std;
typedef pair<int,int> P;

class mycomparison
{
  bool reverse;
public:
  mycomparison(const bool& revparam=false)
    {reverse=revparam;}
  bool operator() (const P& lhs, const P &rhs) const
  {
    if (reverse) return (lhs.first<rhs.first);
    else return (lhs.first>rhs.first);
  }
};

main()
{
      int a,i,N,topel,topfile,fir,sec;
      cin>>N;
     pair<int,int>p;
    priority_queue< P, vector<P>, mycomparison >pq;
      char str[]="output1.txt";
      char str1[]="output10.txt";
      
      std::fstream fin[N+1];
      
      for(i=1;i<=N;i++)
      { if(i<10)
      {str[6]=i+'0';
        fin[i].open(str, std::ios::in);
        fin[i]>>a;}
        else {
              fir=i/10;
              sec=i%10;
              str1[6]=fir+'0';
              str1[7]=sec+'0';
              fin[i].open(str1, std::ios::in);
        fin[i]>>a;}
        
        p.first=a;
        p.second=i;
        pq.push(p);
        }
      
      ofstream fout("ans.txt");
      while(!pq.empty())
      {
        topel=(pq.top()).first;
        topfile=(pq.top()).second;
        //cout<<topel<<endl;
        //system("pause");
       fout<<topel<<endl;
        pq.pop();
        if(fin[topfile]>>a)
        {
        p.first=a;
        p.second=topfile;
        pq.push(p);
        }}
        
        return 0;
        }
        
        
        
        
        
      
      
