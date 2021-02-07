#include<iostream>
using namespace std;
int point(int a[],int b[])
{
    int alice=0,bob=0;

    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
            alice++;
        else if(a[i]<b[i])
            bob++;
    }
    cout<<alice<<endl<<bob<<endl;
}
int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
        cin>>a[i];
    for(int i=0;i<3;i++)
        cin>>b[i];
    point(a,b);


}
