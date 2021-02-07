#include<iostream>
using namespace std;
int main(){
    int t,n,k,b,x[100];
    int m,i,j,r,l,sum,way;
    cin>>t;
    for(m=0;m<t;m++){
        cin>>n>>k>>b;
        for(i=0;i<n;i++){
            cin>>x[i];
        }
        way=0;
        if(k==1){
            for(i=0;i<n;i++){
                if(x[i]==b){
                    way++;
                }
            }
        }
        else if(k==2){
            for(i=0;i<n-1;i++){
                for(j=i+1;j<n;j++){
                    sum=x[i]+x[j];
                    if(sum==b){
                        way++;
                    }
                }
            }
        }
        else if(k==3){
            for(i=0;i<n-2;i++){
                for(j=i+1;j<n-1;j++){
                    sum=x[i]+x[j]+x[j+1];
                    if(sum==b){
                        way++;
                    }
                }
            }
        }
        cout<<"Case "<<m+1<<": "<<way<<endl;
    }
    return 0;
}

