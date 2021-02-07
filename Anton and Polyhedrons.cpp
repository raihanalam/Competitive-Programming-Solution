#include<stdio.h>
#include<string.h>
int main(){
    int i,n,face=0;
    char str[50];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&str);
        if(strcmp(str,"Tetrahedron")==0)
            face=face+4;
        else if(strcmp(str,"Cube")==0)
            face=face+6;
        else if(strcmp(str,"Octahedron")==0)
            face=face+8;
        else if(strcmp(str,"Dodecahedron")==0)
            face=face+12;
        else if(strcmp(str,"Icosahedron")==0)
            face=face+20;
    }
    printf("%d\n",face);

    return 0;
}
