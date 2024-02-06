// Gross Pay Calculation.

#include<stdio.h>

void main()

{

int no_of_hours, gross_pay, pay_rate;

printf("How many hours Did you work"); //displaying output

scanf("%d",&no_of_hours);  // input

printf("How much did you get paid per hour");  // output

scanf("%d",&pay_rate);  // input

gross_pay = no_of_hours * pay_rate; //  Process  - Calculation

printf("Gross pay =%d",gross_pay);

}
