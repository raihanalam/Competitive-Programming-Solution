#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100],str2[100];
    int i,j=1,len;

    cin.get(str1, 100);
    len=strlen(str1);

    str2[0]=str1[0];
    for(i=1;i<=len;i++)
    {
        if(str1[i] != ' ')
        {
           str2[j]=str1[i];
           j++;
        }
    }
    str2[j]='\0';
    cout<<str2<<endl;

    return 0;
}
