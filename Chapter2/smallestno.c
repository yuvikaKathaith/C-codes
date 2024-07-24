#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    if (a>b)
        printf("%d is the smallest number",b);
    else
        printf("%d is the smallest number",a);
    return 0;
}