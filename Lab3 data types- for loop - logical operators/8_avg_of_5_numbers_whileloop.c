#include<stdio.h>

void main()

{
int a=1,x;

int total=0,average;


while(a!=6)           //   a=1  a=2   a=3   a=4  a=5   a=6
{
printf("Enter the value");
scanf("%d",&x);       // 5    10     7      3     5
total=total+x;        // 5    15    22      25    30
a=a+1;                // 2     3     4      5     6
}




average=total/5; 
printf("Total=%d \t average=%d",total,average);
}





