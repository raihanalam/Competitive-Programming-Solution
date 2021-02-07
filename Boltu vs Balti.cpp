#include<iostream>
using namespace std;
int main()
{
    long long int t,n,m,sum=0;
    while(cin>>n>>m)
    {
        if(m<n)
        {
            t=m;
            m=n;
            n=t;
        }
        sum=0;
        for(int i=n;i<=m;i++)
        {
            sum=sum+i;
        }
        cout<<"Sum of "<<n<<" to "<<m<<" is -> "<<sum<<";"<<endl;
    }


    return 0;
}
