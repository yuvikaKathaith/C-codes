#include <stdio.h>

int sum(int n);

int main() {
    int n,result;
    printf("Enter n : ");
    scanf("%d", &n);
    result = sum(n);
    printf("%d",result);
    return 0;
}

int sum(int n) {
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return sumN;
}