#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,track=0,check=0,size;
    scanf("%s",str);
    size = strlen(str);
    for(i=0;i<size;i++){
        if(str[i]==str[i+1]){
            track++;
        }
        else{
            track=0;
        }
        if(track==6){
            check=1;
        }
    }
    if(check==1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}
