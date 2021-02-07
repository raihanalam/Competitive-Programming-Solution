#include<stdio.h>
#include<string.h>
int main(){
    char str[100],str1[100];
    int i,j,size;
    gets(str);
    size=strlen(str);
    j=0;
    for(i=0;i<size;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            str1[j]=str[i];
            j++;
        }
        else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            str1[j]=str[i];
            j++;
        }
        else if(str[i]==' ' || (str[i]>=32 && str[i]<=64) || (str[i]>=91 && str[i]<=96) || (str[i]>=123 && str[i]<=127)){
            str1[j]=str[i];
            j++;
        }
        str1[j]='\0';
    }
    printf("%s",str1);
}
