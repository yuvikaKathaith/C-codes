#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("enter a number :");
    scanf("%d", &a);
    // 1st method
    printf("Even %d \n", a % 2 == 0);
    printf("Odd %d \n", a % 2 != 0);

    // 2nd method
    if (a % 2 == 0)
        printf("Yes, it is div by 2 and it is an Even no.");
    else
        printf("no, it is not div by 2 and it is an odd no.");
    return 0;
}