#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    char str1[20],str2[20],str3[20];
    cin>>str1>>str2>>str3;
    //cout<<str1<<str2<<str3;

    if(strcmp(str1,"vertebrado"))
    {
        if(strcmp(str2,"ave"))
        {
            if(strcmp(str3,"carnivoro"))
            {
                cout<<"aguia"<<endl;
            }
            else if(strcmp(str3,"onivoro"))
            {
                cout<<"pomba"<<endl;
            }
        }
        else if(str2=="mamifero")
        {
            if(str3=="onivoro")
            {
                cout<<"homem"<<endl;
            }
            else if(str3=="herbivoro")
            {
                cout<<"vaca"<<endl;
            }
        }
    }
    else if(str1=="invertebrado")
    {
        if(str2=="inseto")
        {
            if(str3=="hematofago")
            {
                cout<<"pulga"<<endl;
            }
            else if(str3=="harbivoro")
            {
                cout<<"lagarta"<<endl;
            }
        }
        else if(str2=="anelideo")
        {
            if(str3=="hematofago")
            {
                cout<<"sanguessuga"<<endl;
            }
            else if(str3=="onivoro")
            {
                cout<<"minhoca"<<endl;
            }
        }

    }
}
