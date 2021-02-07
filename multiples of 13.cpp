#include<iostream>
using namespace std;
int main()
{
    int x,y,i,sum=0;
    cin>>x>>y;
    if(x>y)
    {
        y=x+y;
        x=y-x;
        y=y-x;
    }
    for(i=x;i<=y;i++)
    {
        if(i%13!=0)
        {
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
