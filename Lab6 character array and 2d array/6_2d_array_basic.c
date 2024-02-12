
#include<stdio.h>

int main()
{
    int arr[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    
    int i, j;
    
    printf("The Two-dimensional Array is:\n");
    
    for(i=0;  i<4; i++)    // row   0 1 2 3
    {
        for(j=0; j<2; j++)   // column    0 1
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}