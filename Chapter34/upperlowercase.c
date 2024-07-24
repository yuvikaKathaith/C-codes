#include<stdio.h>
int main(){
    char ch;
    printf("enter an alphabet : \n");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z'){
        printf("Uppercase");
    }else if (ch>='a' && ch<='z'){
        printf("lowercase");
    }
    else{
        printf("not an english alphabet");
    }
    return 0;
}