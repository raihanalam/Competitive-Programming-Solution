#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr1[100][100],arr2[100][100],result[100][100];
    int m1,n1,m2,n2,i,j,k,sum=0;

    printf("Enter the number of row for first matrix: ");
    scanf("%d",&m1);
    printf("Enter the number of columns for first matrix: ");
    scanf("%d",&n1);

    printf("Enter the number of row for second matrix: ");
    scanf("%d",&m2);
    printf("Enter the number of columns for second matrix: ");
    scanf("%d",&n2);

    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            arr1[i][j]=rand()%5+1;
        }
    }
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            arr2[i][j]=rand()%5+1;
        }
    }
    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            for(k=0;k<n1;k++){
                sum=arr1[i][k]*arr2[k][j];
                result[i][j]=sum;
                sum=0;
            }
        }
    }
    printf("Resultant Array:\n");
    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
}
