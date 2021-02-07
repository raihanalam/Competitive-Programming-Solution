#include<iostream>
using namespace std;
int main(){
    unsigned long long a,b,a1,b1,t,rem,gcd,lcm;
    cin>>t;
    while(t--){
        cin>>a>>b;
        a1=a;
        b1=b;
        while(b!=0){
            rem=a%b;
            a=b;
            b=rem;
        }
        gcd=a;
        lcm=(a1*b1)/gcd;
        if((gcd+lcm)==a1+b1){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    return 0;
}
