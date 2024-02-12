#include <stdio.h>
int main() {
int i, j;
for (i = 0; i <5; i++)     // outer loop
{
  for (j = 0; j <5; j++)// inner loop
  { 

	    printf("%d%d",i,j);
  }
  printf("\n"); /* blank line between tables */
}
}
