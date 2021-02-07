#include<iostream>
using namespace std;
int main()
{
    long long int n,x,first=1,mid,last,q=0;

    cin>>n>>x;
    last=n;

    while(first < last)
    {
        mid=(first+last)/2;
        if(first==last)
        {
            break;
        }
        if(x>mid){
            first=mid+1;
            q++;
        }
        else
        {
            last=mid;
            q++;
        }
    }
    cout<<q<<endl;
}
