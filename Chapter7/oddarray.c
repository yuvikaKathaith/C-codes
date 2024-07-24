#include<stdio.h>
// int oddarr(int arr[], int n);
int main(){
    // int result;
    // int arr[] = {1,2,3,4,5,6};
    // result = oddarr(arr,6);
    // printf("%d",result);  

    int arr[] = {1,2,3,4,5,6};
    
    printf("even : ");
    for(int i=0;i<num;i++){
        if(i%2==0){
            printf("%d  ",i);
        }
    }
    printf("\nodd : ");
    for(int i=0;i<num;i++){
        if(i%2!=0){
            printf("%d  ",i);
        }
    }

return 0;
}
// int oddarr(int arr[], int n){
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if (arr[i]%2!= 0) {
//             count++;
//         }
//     }
//     return count;}