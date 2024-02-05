/* find the value of nth bit

bring the nth bit to first position by doing right shift n-1 times

and do bitwise and & with 1
*/

#include<stdio.h>
void main()
{
int num, n, num1,bitvalue;


printf("Enter the value of num");
scanf("%d",&num);


printf("Which bit do you want to see? n=:");
scanf("%d",&n);


num1=num>>(n-1);

bitvalue= num1 & 1;

printf("%d bit value is %d",n,bitvalue);



}
