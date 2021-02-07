#include<iostream>
using namespace std;
int main()
{
     int i,n,f,a=1,b=1;
    cin>>n;
    for(i=3;i<=n;i++)
    {
        f=a+b;
        a=b;
        b=f;
        if(i==n)
        {
            cout<<f<<endl;
        }
    }
}
