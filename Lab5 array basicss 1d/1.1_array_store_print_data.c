#include<stdio.h>
int main()
{
int arr[4];   // array declaration
arr[0]=11;
arr[1]=24;    // array value initialization using index
arr[2]=44;
arr[3]=100;

// declaring and initializing arrays in single line
// int arr[4]={11,24,44,100};

printf("array values\n");
printf("first value of array=%d\n",arr[0]);
printf("2nd value of array=%d\n",arr[1]);
printf("3rd value of array=%d\n",arr[2]);
printf("4th value of array=%d\n",arr[3]);

return 0;
}
