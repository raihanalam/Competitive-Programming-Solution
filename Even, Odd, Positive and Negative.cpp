#include<iostream>
using namespace std;
int main()
{
    int x,even=0,odd=0,pos=0,neg=0;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            even++;
        }
        else if(x%2!=0)
        {
            odd++;
        }
        if(x>0)
        {
            pos++;
        }
        else if(x<0)
        {
            neg++;
        }
    }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;

    return 0;
}
