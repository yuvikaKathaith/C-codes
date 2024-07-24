#include<stdio.h>
#include<stdlib.h>
//wap to allocate memory to store 5 prices of items (malloc)
int main(){
    int *price;
    price = (int *) malloc(5*sizeof(int));
    price[0]=200;
    price[1]=100;
    price[2]=300;
    price[3]=500;
    price[4]=600;

    for(int i=0; i<5; i++){
        printf("%d\n",price[i]);
    }
    return 0;
}