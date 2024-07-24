#include <stdio.h>
// function declation/prototype
int sum(int a,int b);

int main(){
    int a,b;
    printf("Enter a and b :");
    scanf("%d %d",&a,&b);
    int s=sum(a,b);
    printf("%d",s);
    return 0;
}

// function declration
int sum(int a,int b){
    return a+b;
}