#include<stdio.h>
main()
{
int year;

printf("List of leap years between 0 and 30000\n");

for(year=0;year<=3000;year++)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d\n",year);
    }
}
}
