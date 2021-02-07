#include<iostream>
using namespace std;
int main()
{
    int i,j,p,l,q,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>p>>l;
        p=p-l;
        cout<<"Case "<<i<<": ";
        for(j=1;j<=t;j++)
        {
            if(p%j==0)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}
