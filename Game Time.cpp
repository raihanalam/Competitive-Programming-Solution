#include<iostream>
using namespace std;
int main()
{
    int st,et,gt;
    cin>>st>>et;
    if(st<=24 && et<=24)
    {
        if(st==et)
        {
            cout<<"O JOGO DUROU "<<24<<" HORA(S)"<<endl;
        }
        else if(st>et)
        {
            gt=24-st;
            gt=gt+et;
            cout<<"O JOGO DUROU "<<gt<<" HORA(S)"<<endl;
        }
        else if(st<et)
        {
            gt=et-st;
            cout<<"O JOGO DUROU "<<gt<<" HORA(S)"<<endl;
        }
    }
}
