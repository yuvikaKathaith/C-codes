#include <stdio.h>

int main() {
    int percentage;
    printf("Enter percentage : ");
    scanf("%d",&percentage);
    if (percentage>=60){
        printf("First Division");
    }else if(percentage>50 && percentage<59){
        printf("Second Division");
    }else if(percentage>40 && percentage<49){
        printf("Third Division");
    }else{
        printf("Fail!");        
    }
   return 0;
}
