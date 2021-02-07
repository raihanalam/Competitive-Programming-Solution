#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
void findprefix(char *ptr,int m,int prefarray[]);
int ptrsearch(char *str,char *ptr,int cnt,int index,int k);

int main()
{
    int t,k;
    char *str=new char [1200000];
    char *ptr=new char [1200000];
    if(str=='\0' || ptr=='\0')
    {
        exit(1);
    }
    cin>>t;
    while(t--)
    {
        cin>>str>>ptr>>k;
        int cnt=0;
        int index;
        cout<<ptrsearch(str,ptr,cnt,index,k);
    }
}
int ptrsearch(char *str,char *ptr,int cnt,int index,int k)
{
    int n,m,i=0,j=0,t=0;
    n=strlen(str);
    m=strlen(ptr);

    int prefixArray[m];
    findprefix(ptr,m,prefixArray);
    index=0;
    while(i<n)
    {
        if(str[i]==ptr[j])
        {
            i++;
            j++;
        }
        else
            t++;
        if(j==m || (j+t==m && t<=k))
        {
            //locarray[index]=i-j;
            cnt++;
            index++;
            j=prefixArray[j-1];
        }
        else if(i<n && ptr[i]!=str[i])
        {
            if(j!=0)
            {
                j=prefixArray[j-1];
            }
            else
                i++;
        }
    }
    return cnt;
}
void findprefix(char *ptr,int m,int prefarray[])
{
    int length=0;
    prefarray[0]=0;
    for(int i=1;i<m;i++)
    {
        if(ptr[i]==ptr[length])
        {
            length++;
        }
        else
        {
            if(length!=0)
            {
                length=prefarray[length-1];
                i--;
            }
            else
            {
                prefarray[i]=0;
            }
        }
    }
}
