#include<stdio.h>
int main(){
    int i,n,vote,result=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&vote);
        if(vote==1)
            result=1;
    }
    if(result==0)
        printf("Easy\n");
    else
        printf("Hard\n");

    return 0;
}
