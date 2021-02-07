#include<iostream>
using namespace std;
int main()
{
    int i,k,n,x,count,ncount=0,b=0,min=100*100;
    cin>>n;
    x=n;
    for(int j=n;j>=0;j--)
    {
        count=0;
        for(i=8;i>=0;i--)
        {
            k=n>>i;
            if(k &  1)
            {
                count=count+1;
            }
        }
        if(j==x)
        {
            ncount=count;
        }
        if(ncount==count)
        {
            if(j<min)
                min=j;
        }
        n--;
    }
    cout<<min<<endl;

    return 0;
}
