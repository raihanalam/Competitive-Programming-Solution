#include<iostream>
using namespace std;
int main()
{
    int m=0,n,o;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>o;
        if(o>=m)
        {
            m=o;
        }
    }
    cout<<m;

    return 0;
}
