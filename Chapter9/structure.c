#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1;
        strcpy(s1.name, "Yuvika Kathaith");
        s1.roll = 9;
        s1.cgpa = 8.28;
        printf("Name = %s\n", s1.name);
        printf("roll = %d\n", s1.roll);
        printf("cgpa = %f\n", s1.cgpa);
    return 0;
}