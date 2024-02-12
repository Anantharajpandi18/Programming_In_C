//Search for particular element in a linear manner

#include<stdio.h>

int main()
{
    int a[20],i,x,n,count=0;
    printf("What is the size of your array");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
      }
    printf("Enter element to count the occurance:\n");
    scanf("%d",&x);

    for(i=0;i<n;i++)
	{
        if(a[i]==x)
		{
            count=count+1;
		}
      }

    printf("Element %d Occured %d times",x,count);

    return 0;
}
