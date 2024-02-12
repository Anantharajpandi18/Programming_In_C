#include<stdio.h>

void main()
{
    int arr[4];
    int i, j;
    printf("Arry size is 4\n");
    printf("Enter 4 integer elements");
    for(i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your Array elements\n");
    for(j = 0; j < 4; j++)
    {
        printf("%d\t", arr[j]);
    }
}
