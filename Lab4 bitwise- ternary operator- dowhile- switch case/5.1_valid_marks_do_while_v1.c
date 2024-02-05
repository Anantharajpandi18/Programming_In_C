#include<stdio.h>
void main()
{
int pps;


do
{
    printf("Valid marks should be between 0 to 100\n");
	printf("Enter your pps marks");
	scanf("%d",&pps);
}
while(pps>100);

if(pps>50)
{
printf("Pass");
}
else
{
printf("Fail");
}
}
