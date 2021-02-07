#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    char A[16];
    cin>>A;
    A[0]=toupper(A[0]);
    for(i=0;i<strlen(A);i++)
    {
        if(A[i]=='s')
            A[i]='$';
        else if(A[i]=='i')
            A[i]='!';
        else if(A[i]=='o')
        {
            for(j=strlen(A);j>i;j--)
            {
                A[j+1]=A[j];
            }
            A[i]='(';
            A[i+1]=')';
        }
    }
    A[i]='.';
    A[i+1]='\0';
    cout<<A;

}

