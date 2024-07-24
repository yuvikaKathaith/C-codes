#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 ={"Yuvika", 9, 8.280} ;
    struct student s2 ={"Gunjan", 39, 9.280} ;
    struct student s3 ={"Anuv", 23, 7.280} ;
    
    printf("Student 1 details: \n");
    printf("name = %s\n",s1.name);
    printf("roll = %d\n",s1.roll);
    printf("cgpa = %f\n",s1.cgpa);
    
    
    printf("Student 2 details: \n");
    printf("name = %s\n",s2.name);
    printf("roll = %d\n",s2.roll);
    printf("cgpa = %f\n",s2.cgpa);
    
    printf("Student 3 details: \n");
    printf("name = %s\n",s3.name);
    printf("roll = %d\n",s3.roll);
    printf("cgpa = %f\n",s3.cgpa);
    
    return 0;
}
