#include<stdio.h>
int fact(int n);

int main(){
    int n, result;
    printf("Enter n : ");
    scanf("%d",&n);
    result = fact(n);
    printf("%d",result);
    return 0;
}

int fact(int n){
    if (n==1){ //base case
        return 1;
    }
    int factNm1=fact(n-1);
    int factN = factNm1*n;
    return factN;
}