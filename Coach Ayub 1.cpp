#include<iostream>
using namespace std;
int main()
{
    int n,a,b,s;
    cin>>n>>a>>b>>s;

    if(s>=n*a && s<=n*b)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}
