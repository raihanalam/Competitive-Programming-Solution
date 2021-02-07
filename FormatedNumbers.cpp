#include<iostream>
using namespace std;
int main(){
    char str[20],str1[20];
    int s=0,a,j,i=0,v=0,f=0;
    cin>>a;
    if(a==0){
        cout<<a<<endl;
    }
    else{
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
        for(i=0;str[i]!='\0';i++){
            s++;
        }
        for(i=0,j=s-1;i<s;i++,j--){
            str1[i]=str[j];
        }
        str1[i]='\0';
        cout<<str1<<endl;
    }
    return 0;
}
