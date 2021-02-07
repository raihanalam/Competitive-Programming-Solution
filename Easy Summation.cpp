#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    long long num,sum;
    cin>>t;
    while(t--)
    {
        cin>>num;
        sum=0;
        for(i=1,j=1;i<=num;i++,j=j+2)
        {
            sum=sum+j;
        }
        cout<<sum<<endl;
    }
}
