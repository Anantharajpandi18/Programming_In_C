#include<stdio.h>
void main()
{
int num,count;

printf("Enter a number");
scanf("%d",&num);

while(num>0)
{
count=count+1;
num=num/10;
}

printf("number of digits is %d\n",count);
}
