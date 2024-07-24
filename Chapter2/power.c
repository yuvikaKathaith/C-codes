#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    printf("enter a : ");
    scanf("%d" , &a);
    printf("enter b : ");
    scanf("%d" , &b);
    int power;
    power = pow(a,b);
    printf("The value of a^b is : %d" , power);
    return 0;
}