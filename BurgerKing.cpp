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
        else{
            for(i=0;i<n;i++){
                for(j=i;j<n;j++){
                    sum=x[i];
                    for(r=0,l=j+1;r<k-1;r++,l++){
                        sum=sum+x[l];
                    }
                    if(sum==b){
                        way++;
                        sum=x[i];
                    }
                }
            }
        }
        cout<<"Case "<<m+1<<": "<<way<<endl;
    }
}
