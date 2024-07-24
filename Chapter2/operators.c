#include<stdio.h>
#include<math.h>

int main(){

    /*RELATIONAL OPERATORS*/
    printf("%d \n" , 3==3); //1
    printf("%d \n" , 3>=3); //1
    printf("%d \n" , 3<=3); //1
    printf("%d \n" , 3!=3); //0

    /*LOGICAL OPERATORS AND*/ 
    printf("%d \n" , 3==3 && 2==2); //1
    printf("%d \n" , 3==3 && 3==2); //0
    printf("%d \n" , 3==2 && 1==2); //0

    /*LOGICAL OPERATORS OR*/
    printf("%d \n" , 2==2 || 1==2); //1
    printf("%d \n" , 3==3 || 1==1); //1
    printf("%d \n" , 3==2 || 1==2); //0

    /*LOGICAL OPERATORS NOT*/
    printf("%d \n" , !(3>=2)); //0
    printf("%d \n" , !(3<=2)); //1
    printf("%d \n" , !(3==2 && 2==2)); //1
    printf("%d \n" , !(3>5 || 8<10)); //0

    /*ASSIGNMENT OPERATORS*/
    int a,b;
    a=1;
    b=2;
    a+=b;  
    printf("%d \n" , a );
    a*=b;
    printf("%d \n" , a );
     
    return 0;
}