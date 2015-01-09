#include<iostream>
using namespace std;

int main()
{
    int i=123,j=123;
    int *p, *s;
    *(p=&i)*3;
    p=(s=p,s=&i,s=&j);
    *s+=*p+5;
    cout<<"*s is "<<*s<<endl;
    cout<<"*p is "<<*p<<endl;
    cout<<"i is "<<i<<endl;
    cout<<"j is "<<j<<endl;
    int c;
    cin>>c;
}
    
