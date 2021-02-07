#include<iostream>
using namespace std;
int main(){
    int i,j,k,t1,a[2][2],b[2][2],c[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>b[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            t1=0;
            for(k=0;k<2;k++){
                t1+=(a[i][k]*b[k][j]);
            }
            c[i][j]=t1;
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
