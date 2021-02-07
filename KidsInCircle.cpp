#include<iostream>
using namespace std;
int main()
{
    int t,n,m,kids;

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        kids=n+m;
        if(kids%2 == 0 )
            cout<<kids<<endl;
        else
        {
            cout<<kids-1<<endl;
        }
    }
}
