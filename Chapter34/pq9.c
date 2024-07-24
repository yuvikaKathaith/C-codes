#include<stdio.h>
int main(){
    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if(30<marks && marks<100){
        printf("pass \n");
    }
    else if(0<marks && marks<=30){
        printf("fail \n");
    }
    else{
        printf("wrong marks");
    } 
                                            //OR
    (marks>30)? printf("pass \n") : printf("fail");
    return 0;
}