#include<iostream>
using namespace std;
int main()
{
    int n,a,b,s,i;
    cin>>n>>a>>b>>s;

    i=s/n;

    if(i>=a && i<=b)
    {
         cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
