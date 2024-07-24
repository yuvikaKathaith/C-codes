#include<stdio.h>
int main(){
    int a[2][2], b[2][2], sum[2][2];

    printf("Enter elements of martix a :\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&a[i][j]);
        }printf("\n");
    }
    
    printf("Enter elements of martix b :\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&b[i][j]);
        }printf("\n");
    }
    printf("Sum of martix a and b :\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            sum[i][j] = a[i][j] + b[i][j]; 
            printf("%d  ", sum[i][j]);
        }printf("\n");
    }
return 0;
}