#include<stdio.h>
void main()
{
int num,count;

printf("Enter the value of num");
scanf("%d",&num);

while(num>0)
{
r=num%10;
sum=sum+r;
num=num/10;
}

}