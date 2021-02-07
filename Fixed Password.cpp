#include<iostream>
using namespace std;
int main()
{
    int p;
    while(1)
    {
        cin>>p;
        if(p==2002)
        {
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else
            cout<<"Senha Invalida"<<endl;
    }
    return 0;
}
