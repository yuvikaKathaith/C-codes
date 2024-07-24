#include<stdio.h>
#include<math.h>
int main(){
    char c;
    printf("Enter a character :");
    scanf("%c",&c);
    if ((c>='0') && (c<='9'))
        printf("%c is a digit" ,c);
    else
        printf("%c isn't a digit" ,c);

    return  0;
}