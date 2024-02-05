/*
Modify nth bit value to 1
if nth bit is 0, change it to 1
if nth bit is 1, it should be 1
create a mask and perform bitwise OR |
left shift 1 by n-1 times
*/

#include<stdio.h>
void main()
{

int num, n, mask,result;

printf("Enter the value of num");
scanf("%d",&num);

printf("Which bit do you want to modify? n=:");
scanf("%d",&n);

mask=1<< (n-1);

result= num | mask;

printf("Before %d  after %d",num,result);

}
