#include <stdio.h>
int main() {
    int a=-1,b=1,c,n;
    pritnf("enter n : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}
