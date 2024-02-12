#include<stdio.h>
int main()
{
int arr[10],size,i,sum=0;

//Get size input from user

printf("Enter array size 1 to 10\n");
scanf("%d",&size);

//Get all elements using for loop and store it in array

printf("Enter %d elements\n",size);

for(i = 0; i < size; i++)
{
    scanf("%d",&arr[i]);
}
    //add all elements to the variable sum.

for(i = 0; i < size; i++)
{
    sum = sum + arr[i];       // same as sum += arr[i];
}

//print the result
printf("Sum of the array = %d\n",sum);

return 0;
}
