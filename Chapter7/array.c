#include<stdio.h>
int main(){
    float price[3];

    printf("Enter a ");
    scanf("%f",&price[0]);
    printf("Enter b ");
    scanf("%f",&price[1]);
    printf("Enter c ");
    scanf("%f",&price[2]);

    printf("prize a : %f\n", price[0] + (0.18*price[0]));
    printf("prize b : %f\n", price[1] + (0.18*price[1]));
    printf("prize c : %f\n", price[2] + (0.18*price[2]));
return 0;
}