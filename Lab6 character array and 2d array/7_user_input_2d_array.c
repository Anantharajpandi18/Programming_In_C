
#include <stdio.h>
int main()
{
  int a[2][2],i, j;

  // Taking input using nested for loop
  printf("Enter elements of 2d array\n");

  for (int i = 0; i < 2; i++)     //row   0      1   
    for (int j = 0; j < 2; j++)    //column    0      1
    {
      printf("Enter a %d%d: ", i, j);  
      scanf("%d", &a[i][j]);
    }

printf("\n 2d array ");

  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("%d\t", a[i][j]);

      if (j == 1)
        printf("\n");
    }
  return 0;
}