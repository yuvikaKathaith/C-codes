#include <stdio.h>
int main(){
    int i, sum=0;
    printf("numbers b/w 100 to 1000 : \n");
    for ( i = 101; i < 1000; i++)
    {
        if(i%7==0){
            printf("%d \n",i);
            sum+=i;
        }
    }
    printf("%d", sum);
    return 0;
}