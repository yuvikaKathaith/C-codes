#include <stdio.h>

int main() {
   int choice;
   float length, width, radius, height, side, area;
    printf("Area Calculation Menu\n");
    printf("---------------------\n");
    printf("1. Calculate the area of Circle\n");
    printf("2. Calculate the area of Rectangle\n");
    printf("3. Calculate the area of Square\n");
    printf("4. Calculate the area of Cube\n");
    printf("5. Calculate the area of Cylinder\n");
    printf("Choose (1-5) : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14*radius*radius;
            printf("The area is: %f" , area);
            break;
        case 2:
            printf("Enter the length and width : ");
            scanf("%f%f", &length, &width);
            area = length*width;
            printf("The area is: %f\n", area);
            break;
        case 3:
            printf("Enter side: ");
            scanf("%f", &side);
            area = side*side;
            printf("The area is: %f" , area);
            break;
        case 4:
            printf("Enter side: ");
            scanf("%f", &side);
            area = 6*(side*side);
            printf("The area is: %f" , area);
            break;
        case 5:
            printf("Enter radius and height : ");
            scanf("%f%f", &radius,&height);
            area = 2*3.14*radius*height;
            printf("The area is: %f" , area);
            break;
        default:
            printf("not valid");
            break;
    }
   return 0;
}