#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,i,check=0;
    long long n;
    long double n1;
    cin>>t;
    while(t--){
        check=0;
        cin>>n;
        n1=n;
        n=sqrt(n);
        n1=sqrt(n);
        if(n==n1){
            for(i=2;i<=n/2;i++){
            if(n%i==0){
                check=1;
            }
            }
            if(check==0){
                cout<<"YES."<<endl;
            }
            else{
                cout<<"NO."<<endl;
            }
        }
        else{
            cout<<"NO."<<endl;
        }
    }
}
