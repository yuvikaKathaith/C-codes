#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,average;
    printf("Enter 3 no. : ");
    scanf("%f%f%f",&a,&b,&c);
    average=(a+b+c)/3;
    printf("The avg of %f,%f and %f is : %f \n", a,b,c,average);
    return 0;
}