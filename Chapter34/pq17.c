#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter n:");
        scanf("%d",&n);
        printf("%d \n",n);
        if(n%2!=0){
            break;
        }
    }while(n%2==0);
        printf("thank you!!");
    return 0;
}
