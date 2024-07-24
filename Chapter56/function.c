#include<stdio.h>
//function declation/prototype
void printHello();
void printGoodbye();

int main(){
    printHello();   //function call
    printGoodbye();
       
    return 0;
}
//function declration
void printHello(){
    printf("Hello! \n");
} 
void printGoodbye(){
    printf("Goodbye! \n");
} 