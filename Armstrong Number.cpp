#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num1,num2,n=0,arm=0,dig=0;
    cin>>num1;
    num2=num1;
    while(num1!=0)
    {
        num1=num1/10;
        n++;
    }
    num1=num2;
    while(num1>0)
    {
        dig=num1%10;
        arm=arm+(pow(dig,n)+0.5);
        num1=num1/10;
    }
    if(num2==arm)
    {
        cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"Not a armstrong number"<<endl;
    }
}
