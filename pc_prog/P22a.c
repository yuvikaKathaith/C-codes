//using string functions 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // String length
    printf("Enter a string: ");
    gets(str1);
    printf("Length of the string: %d\n", strlen(str1));

    // String copying
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    // String concatenation
    printf("Enter another string: ");
    gets(str1);
    strcat(str2, str1);
    printf("Concatenated string: %s\n", str2);

    // String reverse
    strrev(str2);
    printf("Reversed string: %s\n", str2);

    return 0;
}

