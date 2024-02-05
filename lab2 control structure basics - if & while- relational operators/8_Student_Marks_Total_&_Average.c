#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,m5,total;

    float avg;

    printf("Enter marks in 5 subjects\n valid marks- o to 100");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    total=m1+m2+m3+m4+m5;

    avg=total/5;
    printf("Total Marks=%d\n",total);
    printf("Average Marks=%f\n",avg);

    if(avg>50)
	{
		printf("Pass");
	}
     else
	{
		printf("Fail");		
      }
}
