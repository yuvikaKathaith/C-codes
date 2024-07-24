#include<stdio.h>
#include<math.h>
int main(){
//(a)
    int isSunday=1;
    int isSnowing =1;
    printf("%d \n",isSunday && isSnowing );
//(b)
    int isMonday=1;
    int israining =0;
    printf("%d \n",isMonday || israining );
//(c)
    int x;
    printf("enter a no.");
    scanf("%d",&x);
    printf("%d\n", (x>9) && (x<100) );
    return 0;
}