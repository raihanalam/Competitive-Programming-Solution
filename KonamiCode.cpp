#include<iostream>
using namespace std;
int main()
{
    char str[10000];
    int i=0,konami=0;
    cin>>str;
    while(str[i]!='\0'){
        if(str[i]=='U' && str[i+1]=='U'  && str[i+2]=='D' && str[i+3]=='D' && str[i+4]=='L' && str[i+5]=='R' && str[i+6]=='L' && str[i+7]=='R' && str[i+8]=='B' && str[i+9]=='A'){
            konami++;
            i=i+9;
        }
        i++;
    }
    cout<<konami<<endl;
}
