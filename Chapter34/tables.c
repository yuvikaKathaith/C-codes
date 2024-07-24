#include<stdio.h>
int main(){
    int i=1,n;
    printf("enter n : ");
    scanf("%d",&n);
    // int table = 1;
    // for(int i=1; i<=10; i++){
    //     table = n*i;
    //     printf("%d X %d = %d \n",n,i,table);
    // }
    do
    {
        int table =1;
        table = n*i;
        printf("%d X %d = %d\n", n,i,table);
        i++;
    } while (i<=10);
    
    return 0;
}