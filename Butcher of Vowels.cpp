#include<iostream>
using namespace std;
int main(){
    char str[50];
    int i,t,evil;
    cin>>t;
    while(t--){
        evil=0;
        i=0;
        cin>>str;
        while(str[i]!='\0'){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                evil=1;
            }
            i++;
        }
        if(evil==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
