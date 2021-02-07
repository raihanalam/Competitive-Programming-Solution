#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,sum,x;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>x;
            if(x>=0 && x<=99)
                sum=sum+x;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
