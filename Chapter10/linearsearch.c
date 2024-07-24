#include<stdio.h>
int main(){
    int list[5]={10,20,30,40,50};
    int i=0,n;
    printf("enter element to be found from list : ");
    scanf("%d",&n);
    while(i<5){
        if (list[i]==n){
            printf("element found");
            break;
        }
        i++;
    }
    if(i>=5){
        printf("not found");
    }
    return 0;
}