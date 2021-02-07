#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int L=0,Y=0,Z=0;
        cin>>str;
        L=strlen(str);
        for(j=0;j<L-1;j++)
        {
            if(str[j]=='S' && str[j+1]=='S')
                Y++;
            else if(str[j]=='S' && str[j+1]!='S')
                Z++;
        }
        cout<<"Case "<<i<<": "<<Y<<" / "<<Z<<endl;
    }
}
