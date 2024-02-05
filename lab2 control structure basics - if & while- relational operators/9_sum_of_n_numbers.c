#include<stdio.h>

void main()
{

int sum,i=0,n;
sum=0;

printf("Enter the value of n");
scanf("%d",&n);

while(i<=n)
{
	sum=sum+i;
	i=i+1;
}

printf("sum of n numbers is %d",sum);

}
	