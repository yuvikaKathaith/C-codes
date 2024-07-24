#include<stdio.h>
int main(){
    int num1, num2;
    printf("enter A : ");
    scanf("%d" , &num1);
    printf("enter B : ");
    scanf("%d" , &num2);


    printf("the sum is : %d \n" , num1 + num2);
    printf("the subtraction is : %d \n" , num1 - num2);
    printf("the product is : %d \n" , num1 * num2);
    printf("the division is : %d \n" , num1 / num2);

    return 0;
}