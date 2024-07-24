#include <stdio.h>

int fib(int n);

int main() {
    int n,result;
    printf("Enter n : ");
    scanf("%d", &n);
    result = fib(n);
    printf("%d \n",result );
    return 0;
}

int fib(int n) {
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}