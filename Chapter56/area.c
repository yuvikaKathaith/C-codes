#include<stdio.h>
#include<math.h>
void circleArea(float r);
void rectangleArea(float l,float b);
void squareArea(float s);

int main(){
    float r;
    printf("R : ");
    scanf("%f",&r);
    circleArea(r);
    
    float l,b;
    printf("L : ");
    scanf("%f",&l);
    printf("B : ");
    scanf("%f",&b);
    rectangleArea(l,b);

    float s;
    printf("S : ");
    scanf("%f",&s);
    squareArea(s);

    return 0;
}

void circleArea(float r){
    float area;
    area = 3.14*r*r;
    printf("enter area : %f \n",area);    
}
void rectangleArea(float l,float b){
    float area;
    area = l*b;
    printf("enter area : %f \n ",area);    
}
void squareArea(float s){
    float area;
    area = s*s;
    printf("enter area : %f \n",area);    
}

