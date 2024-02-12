//Search for particular element in a linear manner

#include<stdio.h>

int main()
{
    int a[20],i,min,n,index;
    printf("What is the size of your array");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
      }
    min=a[0];
    for(i=1;i<n;i++)
	{
        if(a[i]<min)
		{
			min=a[i];
			index=i;
		}
      }

    printf("smallest element in the array is %d at index %d",min,index);

    return 0;
}
