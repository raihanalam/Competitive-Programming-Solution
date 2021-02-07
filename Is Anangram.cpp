#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[99],b[99];
    int i,j,c=0,d=0;
    cin>>a>>b;
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(b);j++)
        {
            if(a[i]==b[j])
                c=1;

        }
        if(c==0)
            d==1;

    }
    if(d==1)
    {
        cout<<"No";
    }
    else
        cout<<"Yes";

}
