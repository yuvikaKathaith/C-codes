#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, sum, sub, mul, div;
    printf("Enter a and b : ");
    scanf("%f %f", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    printf("The Sum is : %f \n", sum);
    printf("The Subtraction is : %f \n", sub);
    printf("The Product is : %f \n", mul);
    printf("The Division is : %f \n", div);
    return 0;
}