#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1 = {9, 8.2, "yuvika"};
    /*1*/ printf("roll = %d\n", s1.roll);
    struct student *ptr = &s1;
    /*2*/ printf("roll = %d\n", (*ptr).roll);

    /*3*/ printf("roll = %d\n", ptr->roll);
    return 0;
}

