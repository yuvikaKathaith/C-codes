#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "hello", str2[] = "world", str3[] = "HELLO", str4[] = "WORLD";
    // upper
    printf("%s\n", strupr(str1));

    // lower
    printf("%s\n", strlwr(str3));

    // reverse
    printf("%s\n", strrev(str2));

    char str5[] = "HI";
    // catenation
    printf("%s\n", strcat(str5, str4));

    char str6[] = "Yuvika";
    // length
    printf("%d\n", strlen(str6));

    char str7[] = "hell", str8[] = "world";

    // string compare
    if (strcmp(str7, str8) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("not equal\n");
    }

    char str9[] = "hello", str10[] = "helloo";

    // string copy
    strcpy(str9, str10);
    printf("%s", str9);

    return 0;
}
