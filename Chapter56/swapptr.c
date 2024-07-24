#include<stdio.h>

void swapnumber(int *a,int *b);

int main(){
    int x=2,y=3;
    swapnumber(&x,&y);
    printf("%d \n%d\n", x,y);
    return 0;
}
//call by reference
void swapnumber(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("%d\n",*a);
    printf("%d\n",*b);
}