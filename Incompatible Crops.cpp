#include<iostream>
using namespace std;
int main(){
    char arr[25][25];
    int r,c,i,j,fs=0;
    cin>>r>>c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==0){
                if(j==0){
                    if(arr[i][j]=='.' && arr[i][j+1]=='.' && arr[i+1][j]=='.'){
                        fs++;
                    }
                }
                else if(j==c-1){
                    if(arr[i][j]=='.' && arr[i][j-1]=='.' && arr[i+1][j]=='.'){
                        fs++;
                    }
                }
                else{
                    if(arr[i][j]=='.' && arr[i][j-1]=='.' && arr[i+1][j]=='.' && arr[i][j+1]=='.'){
                        fs++;
                    }
                }
            }
            else if(i==r-1){
                if(j==0){
                    if(arr[i][j]=='.' && arr[i][j+1]=='.' && arr[i-1][j]=='.'){
                        fs++;
                    }
                }
                else if(j==c-1){
                    if(arr[i][j]=='.' && arr[i][j-1]=='.' && arr[i-1][j]=='.'){
                        fs++;
                    }
                }
                else{
                    if(arr[i][j]=='.' && arr[i][j-1]=='.' && arr[i-1][j]=='.' && arr[i][j+1]=='.'){
                        fs++;
                    }
                }

            }
            else{
                if(j==0){
                    if(arr[i][j]=='.' && arr[i][j+1]=='.' && arr[i+1][j]=='.' && arr[i-1][j]=='.'){
                        fs++;
                    }
                }
                else if(j==c-1){
                    if(arr[i][j]=='.' && arr[i][j-1]=='.' && arr[i+1][j]=='.' && arr[i-1][j]=='.'){
                        fs++;
                    }
                }
                else{
                    if(arr[i][j]=='.' && arr[i][j-1]=='.' && arr[i+1][j]=='.' && arr[i-1][j]=='.' && arr[i][j+1]=='.'){
                        fs++;
                    }
                }
            }
        }
    }
    cout<<fs<<endl;
}
