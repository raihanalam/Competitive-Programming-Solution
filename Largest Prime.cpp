#include<iostream>
using namespace std;
int main(){
    int i,j,k,q,l,r,check,prime;
    cin>>q;
    for(i=0;i<q;i++){
        cin>>l>>r;
        for(j=l;j<=r;j++){
            check=0;
            prime=-1;
            for(k=2;k<=j/2;k++){
                if(j%k==0){
                    check=1;
                }
            }
            if(check==0){
                if(j>prime){
                    prime=j;
                }
            }
        }
        cout<<prime<<endl;
    }

}
