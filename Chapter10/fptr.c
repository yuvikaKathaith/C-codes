#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("helloworld.c", "r");
    fclose(fptr);

    return 0;
}