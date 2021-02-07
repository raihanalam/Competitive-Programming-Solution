#include<iostream>
using namespace std;
int main(){
    int n,i,j,check=0;
    cin>>n;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            check=1;
        }
    }
    if(check==0){
        cout<<"NO PUNISHMENT"<<endl;
    }
    else if(check==1){
        for(i=0;i<n;i++){
            cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
        }
    }
    return 0;
}
