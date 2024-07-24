#include<stdio.h>

void swapnumber(int a,int b);

int main(){
    int x=2,y=3;
    swapnumber(x,y);
    return 0;
}
//call by value
void swapnumber(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d\n",a);
    printf("%d",b);

}