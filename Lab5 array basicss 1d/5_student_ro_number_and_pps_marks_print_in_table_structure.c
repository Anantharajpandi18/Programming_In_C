//Search for particular element in a linear manner

#include<stdio.h>
int main()
{
    int rollno[20],marks[20],i,j,n;
    printf("What is the strength of your class");
    scanf("%d",&n);
    printf("Enter %d roll numbers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&rollno[i]);
    }
    printf("Enter PPS marks\n");

    for(i=0;i<n;i++)
    {

		printf("Enter the marks of rollno %d\t",rollno[i]);
		scanf("%d",&marks[i]);
    }
    printf("\n");
    printf("******************************\n");
    printf("Roll no\t     PPS marks\n");
	for(i=0;i<n;i++)
	{
	printf("   %d   \t    %d    \n",rollno[i],marks[i]);
	}
    printf("******************************\n");

    return 0;
}
