#include<stdio.h>
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    for(int i=10; i>=1; i--){ //REVERSE TABLES
        printf("%d \n", n*i);
    }
    return 0;
}