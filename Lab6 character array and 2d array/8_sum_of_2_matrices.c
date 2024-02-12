// C program to find the sum of two matrices of order 2*2

#include <stdio.h>
int main()
{
  int a[2][2], b[2][2], result[2][2];

  // Taking input using nested for loop

  printf("Enter elements of 2d array\n");

  for (int i = 0; i < 2; i++)     //row   0      1
    for (int j = 0; j < 2; j++)    //column    0      1
    {
      printf("Enter a %d%d: ", i, j);
      scanf("%d", &a[i][j]);
    }



  // Taking input using nested for loop

  printf("Enter elements of 2d array\n");

  for (int i = 0; i < 2; i++)     //row   0      1
    for (int j = 0; j < 2; j++)    //column    0      1
    {
      printf("Enter a %d%d: ", i, j);
      scanf("%d", &b[i][j]);
    }



  // adding corresponding elements of two arrays
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 2; j++)
    {
      result[i][j] = a[i][j] + b[i][j];
    }

  // Displaying the sum
  printf("\nSum Of Matrix:\n");

  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 2; j++)
    {
      printf("\t%d\t", result[i][j]);

      if (j == 1)
        printf("\n");
    }
  return 0;
}
