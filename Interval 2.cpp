#include<iostream>
using namespace std;
int main()
{
    int n,x,ci=0,co=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x>=10 && x<=20)
        {
            ci++;
        }
        else
        {
            co++;
        }
    }
    cout<<ci<<" in"<<endl<<co<<" out"<<endl;
}
