#include <stdio.h>
// function declation/prototype
void namaste();
void bonjour();

int main()
{
    char ch;
    printf("nationality i for indian and b for french : ");
    scanf("%c", &ch);
    if (ch == 'i'){
        namaste(); // function call
    }
    else{
        bonjour();
    }
    return 0;
}

// function declration
void namaste(){
    printf("Namaste! \n");
}
void bonjour(){
    printf("Bonjour! \n");
}
