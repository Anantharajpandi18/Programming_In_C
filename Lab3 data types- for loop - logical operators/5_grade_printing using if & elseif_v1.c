#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float mark, sum=0, avg;
    printf("Enter Marks of 5 subjects");
    for(i=0; i<5; i++)
    {
        scanf("%f", &mark);
        sum = sum+mark;
    }
    avg = sum/5;

    printf("\nGrade = ");
    if(avg>=90 && avg<=100)
        printf("A");
    else if(avg>=80 && avg<90)
        printf("B");
    else if(avg>=70 && avg<80)
        printf("C");
    else if(avg>=60 && avg<70)
        printf("D");
    else if(avg>=50 && avg<60)
        printf("E");
    else if(avg>=0 && avg<50)
        printf("R");
    else
        printf("Invalid!");
    getch();
    return 0;
}
