#include<iostream>
#include<cstdio>

using namespace std;
int permut1(int i)
{
    int a,b=0;
    a=i/10;
    b=((i-(a*10))*10+a);
    //cout<<"b="<<b<<endl;
    return b;
}
int permut2(int i)
{
    int a,b=0;
    a=i/100;
    b=((i-(a*100))*10+a);
    //cout<<"b="<<b<<endl;
    return b;

}
int permut3(int i)
{
    int a,b=0;
    a=i/1000;
    b=((i-(a*1000))*10+a);
    //cout<<"b="<<b<<endl;
    return b;
}
int permut4(int i)
{
    int a,b=0;
    a=i/10000;
    b=((i-(a*10000))*10+a);
    //cout<<"b="<<b<<endl;
    return b;
}
int permut5(int i)
{
    int a,b=0;
    a=i/100000;
    b=((i-(a*100000))*10+a);
    //cout<<"b="<<b<<endl;
    return b;
}
int permut6(int i)
{
    int a,b=0;
    a=i/1000000;
    b=((i-(a*1000000))*10+a);
    //cout<<"b="<<b<<endl;
    return b;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t=0,m=0,n=0,o=0,p=0,q=0,r=0,i=0,j=0;
    int a,b=0,count=0,ans=0;
    //int arr[1001];
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>a>>b;
        if(b>11)
        {
        if(a>11)
        j=a;
        else
        j=12;
        for(i=j;i<=b;i++)
        {
            if(i<100)
            {
                m=permut1(i);
                if(m<=b && i<m)
                {
                ans++;
                }
            }
            else if(i<1000)
            {
                m=permut2(i);
                if(m<=b && i<m)
                ans++;
                n=permut2(m);
                if(n<=b && i<n)
                ans++;
            }
            else if(i<10000)
            {
                m=permut3(i);
                if(m<=b && i<m)
                ans++;
                n=permut3(m);
                if(n<=b && i<n)
                ans++;
                o=permut3(n);
                if(o<=b && i<o)
                ans++;
            }
            else if(i<100000)
            {
                m=permut4(i);
                if(m<=b && i<m)
                ans++;
                n=permut4(m);
                if(n<=b && i<n)
                ans++;
                o=permut4(n);
                if(o<=b && i<o)
                ans++;
                p=permut4(o);
                if(p<=b && i<p)
                ans++;

            }
            else if(i<1000000)
            {
                m=permut5(i);
                if(m<=b && i<m)
                ans++;
                n=permut5(m);
                if(n<=b && i<n)
                ans++;
                o=permut5(n);
                if(o<=b && i<o)
                ans++;
                p=permut5(o);
                if(p<=b && i<p)
                ans++;
                q=permut5(o);
                if(q<=b && i<q)
                ans++;
            }
            else if(i<10000000)
            {
                m=permut6(i);
                if(m<=b && i<m)
                ans++;
                n=permut6(m);
                if(n<=b && i<n)
                ans++;
                o=permut6(n);
                if(o<=b && i<o)
                ans++;
                p=permut6(o);
                if(p<=b && i<p)
                ans++;
                q=permut6(o);
                if(q<=b && i<q)
                ans++;
                r=permut6(q);
                if(r<=b && i<r)
                ans++;
            }

        }
        }
        cout<<"Case #"<<++count<<": "<<ans<<endl;

    }
return 0;
}
