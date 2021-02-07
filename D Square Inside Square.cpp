#include<iostream>
using namespace std;
int squar(int n,int count)
{
    if(n>1)
    {
        count = n*squar(n-1,count)+count;
        return count;
    }
    else
        return 1;
}
int main()
{
    int n,i,T,count,j;
    cin>>T;
    for(i=0;i<T;i++)
    {
        count=1;
        cin>>n;
        /*for(j=n;j>=1;j--)
        {
            count=(j*j)+count;
        }*/
        cout<<squar(n,count);
    }
}
