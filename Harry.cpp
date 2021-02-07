#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int i,j,t,n;
    char str1[150];
    char str2[150];
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        strcpy(str1,"Harr");
        strcpy(str2,"! Khelbe Hogwarts, Jitbe Hogwarts!");
        for(j=4;j<=n+3;j++){
            str1[j]='y';
        }
        str1[j]='\0';
        strcat(str1,str2);
        cout<<"Case "<<i<<": "<<str1<<endl;
        str1[0]='\0';
        str2[0]='\0';
    }
}
