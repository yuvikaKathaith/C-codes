#include<stdio.h>
int main(){
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=91;
    marks[0][2]=92;
    marks[1][0]=94;
    marks[1][1]=96;
    marks[1][2]=90;

    printf("%d\n", marks[1][0]);
return 0;
}