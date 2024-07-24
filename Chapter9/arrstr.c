#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    
    struct student std[5];
    printf("Enter details of 5 Students : \n");
    for(int i=0; i<5; i++){
        printf("name = ");
        scanf("%s",&std[i].name);
        printf("roll = ");
        scanf("%d",&std[i].roll);
        printf("cgpa = ");
        scanf("%f",&std[i].cgpa);
    }
    
    printf("Show details of 5 Students : \n");
    for(int i=0; i<5;i++){
        printf("name = %s\n",std[i].name);
        printf("roll = %d\n",std[i].roll);
        printf("cgpa = %f\n",std[i].cgpa);
    }
    
    return 0;
}
