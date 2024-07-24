#include<stdio.h>
#include<math.h>
//function declation/prototype
void squareNumber(float n);

int main(){
    float n;
    printf("Enter number : ");
    scanf("%f",&n);
    squareNumber(n);
    return 0;
}
//function declration
void squareNumber(float n){
    n = pow(n,2);
    printf("Square of n is : = %f",n);
}
