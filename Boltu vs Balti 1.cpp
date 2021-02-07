#include<iostream>
using namespace std;
int main()
{
    long long int t,x,y,n,m,sum=0;

    while(cin>>n>>m)
    {
        if(m<n)
        {
            t=n;
            n=m;
            m=t;
        }
        x=(m*(m+1))/2;
        y=(n*(n+1))/2;
        sum=(x-y)+n;
        cout<<"Sum of "<<n<<" to "<<m<<" is -> "<<sum<<";"<<endl;
    }

    return 0;
}

