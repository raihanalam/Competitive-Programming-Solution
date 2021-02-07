#include<iostream>
using namespace std;
int main()
{
    int n,rem=0;
    long long num;
    cin>>n;
    while(n--)
    {
        int count=0;
        cin>>num;
        while(num!=0)
        {
            rem=num%10;
            num=num/10;
            if(rem==1)
            {
                count=count+2;
            }
            else if(rem==2 || rem==3 || rem==5)
            {
                count=count+5;
            }
            else if(rem==4)
            {
                count=count+4;
            }
            else if(rem==0 || rem==6 || rem==9)
            {
                count=count+6;
            }
            else if(rem==7)
            {
                count=count+3;
            }
            else if(rem==8)
            {
                count=count+7;
            }
        }
        cout<<count<<" leds"<<endl;
    }
    return 0;
}

