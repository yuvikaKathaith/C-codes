#include<stdio.h>
int main(){
    int day;
    char month;
    printf("enter month : \n");
    scanf("%c",&month);
    printf("enter day :");
    scanf("%d",&day);
   
    switch(month){
        case 'd' : switch(day);
            case 31 : printf("happy birthday Yuvika!!");
        break;
        case 'j' : switch(day);
            case 29 : printf("happy birthday Nee chan!!");
        break;
        case 'm' : switch(day);
            case 27 : printf("happy birthday Mummy!!");
        break;
        case 'f' : switch(day);
            case 05 : printf("happy birthday Papa!!");
        break;
        default : printf("not a valid birthday!");
    }
    return 0;
}