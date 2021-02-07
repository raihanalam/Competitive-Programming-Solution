#include<iostream>
using namespace std;
int main(){
    char str[20];
    int a,i=0,v=0,f=0;
    cin>>a;
    while(a!=0){
        if(f==3){
            str[i]=',';
            f=0;
            i++;
        }
        v=a%10;
        str[i]=v+'0';
        a=a/10;
        i++;
        f++;
    }
    str[i]='\0';
    cout<<str;
    //cout<<strrev(str);

}
