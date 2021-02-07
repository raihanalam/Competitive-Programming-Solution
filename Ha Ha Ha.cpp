#include<iostream>
using namespace std;
int main(){
    int i=1,t,a,b;
    cin>>t;
    while(i<=t){
        cin>>a>>b;
        cout<<"Case "<<i<<": "<<(a*a)+(b*b)<<endl;
        i++;
    }
}
