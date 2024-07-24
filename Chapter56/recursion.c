#include <stdio.h>

void printHW(int count);

int main() {
    int count;
    printf("Enter count: ");
    scanf("%d", &count);
    printHW(count);

    return 0;
}

void printHW(int count){
    if(count == 0){
        return;
    }
    printf("hello world \n");
    printHW(count-1);
}