#include<stdio.h>
int main(){
    //print the numbers from 0 to n if n is given by the user
    int i=0,n;
    printf("enter n : \n");
    scanf("%d",&n);
    while(i<=n){
        printf("%d \n", i);
        i++;
    }
    return 0;
}