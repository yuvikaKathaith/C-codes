#include<stdio.h>
#include<math.h>
int main(){
    int age;
    printf("enter age :");
    scanf("%d",&age);
        if (age>18 && age<60){
            printf("Adult");
        }
        else if (age > 60){
            printf("Senior citizen");
        }
        else if (13<age && age<18) {
            printf("Teenager");
        }
        else{
            printf("Child");
        }
    return 0;
}