#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};
 int main(){
    struct student ECE[120];
    struct student CSE[180];
    struct student IT[180];
    ECE[0].roll = 9;
    ECE[0].cgpa = 8.2;
    strcpy(ECE[0].name, "yuvika");
    printf("name : %s", ECE[0].name);
    return 0;
}