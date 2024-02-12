//Search for particular element in a linear manner

#include<stdio.h>
int main()
{
    int a[20],i,max,n,index;
    printf("What is the size of your array");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
	{
        scanf("%d",&a[i]);
    }
    max=a[0];  // Initially assume first array value is largest value
    for(i=1;i<n;i++)
	{
        if(a[i]>max)
		{
			max=a[i];
			index=i;
		}
    }
    printf("Largest element in the array is %d at index %d",max,index);
    return 0;
}
