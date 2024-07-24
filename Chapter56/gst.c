#include<stdio.h>
//function declation/prototype
void calculatePrice(float p);

int main(){
    float p;
    printf("Enter the price : ");
    scanf("%f",&p);
    calculatePrice(p);
    return 0;
}
//function declration
void calculatePrice(float p){
    p = p + (0.18*p);
    printf("Gst added price = %f",p);
}
