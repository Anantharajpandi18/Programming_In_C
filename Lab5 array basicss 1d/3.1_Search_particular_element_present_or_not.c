//Search for particular element in a linear manner

#include<stdio.h>

int main()
{
    int a[20],i,x,n;
    printf("What is the size of your array");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
      }
    printf("nEnter element to search:");
    scanf("%d",&x);

    for(i=0;i<n;i++)
	{
        if(a[i]==x)
		{
		printf("Element found\n");
            break;
		}
      }
    if(i<n)
	{
        printf("Element found at index %d and position %d",i,i+1);
	}
    else
	{
        printf("Element not found");
  	}
    return 0;
}
