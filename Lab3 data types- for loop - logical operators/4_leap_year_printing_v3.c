#include<stdio.h>
main()
{
int year;

printf("Enter the year to check for a leap year:");
scanf ("%d", &year);

if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
    printf("The entered year is a leap year.");
}
else
{
    printf("The entered year is not a leap year.");
}

}
