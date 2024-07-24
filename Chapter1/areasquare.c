#include<stdio.h>

// Area of a Square 

int main(){
    printf("Enter side of a square : ");
    int side;
    //OR float side;
    
    scanf("%d", &side);
    // OR scanf("%f", &side);
    
    printf("the area of square is : %d \n" , side*side);
    // OR printf("the area of square is : %f \n" , side*side);
    
    return 0;
}