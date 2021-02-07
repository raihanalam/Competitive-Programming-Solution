#include<bits/stdc++.h>
using namespace std;
int main( )
{
    char mac,number[10000];
    int i,j,max=0,count;
    cin>>number;

    int len=strlen(number);
    for(i=0;i<len;i++)
    {
        count=0;
        for(j=0;j<len;j++)
        {
            if(number[i]==number[j])
            {
                count++;
            }
        }
        if(max == count)
        {
            if(mac>number[i])
                mac=number[i];
        }
        if(max<count)
        {
            max=count;
            mac=number[i];
        }
    }
    cout<<mac<<endl;
}
