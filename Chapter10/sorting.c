#include <stdio.h>

int main()
{
    int arr[6]={2,4,5,1,6,3}, temp;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("array elements after sorting : ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}
