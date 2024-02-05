#include<stdio.h>
void main()
{	
	int a, b,temp;
	printf("Enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	printf("Before Swapping\n");
	printf("a=%d\tb=%d\n",a,b);
	
	temp=a;
	a=b;
	b=a;
	
	printf("After Swapping\n");
	printf("a=%d\tb=%d",a,b);
	
}
