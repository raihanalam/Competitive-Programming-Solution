#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int syz=0,i,j,n,dig;
    long long fact=1;
    char bfact[10000];

    cin>>n;
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    i=0;
    while(fact!=0)
    {
        dig=fact%10;
        fact=fact/10;
        if(syz<4)
        {
            bfact[i]=dig+'0';

            i++;
        }
        if(syz==4)
        {
            break;
        }
        syz++;
    }
    bfact[i]='\0';
    strrev(bfact);
    cout<<bfact<<endl;
}
