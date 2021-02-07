#include<iostream>
using namespace std;
int main()
{
    int i,a,b,c=0;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
        if(i*a==b)
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        cout<<"Nao sao Multiplos"<<endl;
    }
    else
    {
        cout<<"Sao Multiplos"<<endl;
    }
    return 0;
}
