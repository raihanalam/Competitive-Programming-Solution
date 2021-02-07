#include<iostream>
using namespace std;
int main(){
    char str[100];
    int t,i,over,ball;
    cin>>t;
    while(t--){
        cin>>str;
        over=0,ball=0;
        i=0;
        while(str[i]!='\0'){
            if( (str[i]>=48 && str[i]<=54) || (str[i]=='O' ) ){
                ball++;
            }
            if(ball==6){
                over++;
                ball=0;
            }
            i++;
        }
        if(over==0 && ball>1){
            cout<<ball<<" BALLS"<<endl;
        }
        else if(ball==0 && over>1){
            cout<<over<<" OVERS"<<endl;
        }
        else if(over==0 && ball==1){
            cout<<ball<<" BALL"<<endl;
        }
        else if(over==1 && ball==0){
            cout<<over<<" OVER"<<endl;
        }
        else if(ball==1 && over ==1)
        {
            cout<<over<<" OVER "<<ball<<" BALL"<<endl;
        }
        else{
            cout<<over<<" OVERS "<<ball<<" BALLS"<<endl;
        }
    }
    return 0;
}
