#include<iostream>
using namespace std;
int main()
{
    int i,j,t,n,time,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        temp=n;
        time=1;
        for(i=1;i<n;i++)
        {
            for(j=0;j<6;j++)
            {
                if(n==0)
                {
                    break;
                }

                n--;
            }
            if(n==0)
            {
                break;
            }
            time++;
        }
        cout<<time+temp<<endl;
    }
}

