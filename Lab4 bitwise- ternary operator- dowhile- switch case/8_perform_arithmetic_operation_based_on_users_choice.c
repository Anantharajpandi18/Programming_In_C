#include <stdio.h>
void main()
    {
        int choice,a,b,c;

    do{

        printf("Enter the value of a and b\n");
        scanf("%d%d",&a,&b);
        printf("which arithmetic operation you want to perform?\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Modulo Division\n 6.exit");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                c=a+b;
                printf("Addition of %d, %d is %d",a,b,c);
                break;

            case 2:
                c=a-b;
                printf("Subtraction of %d, %d is %d",a,b,c);
                break;

            case 3:
                c=a*b;
                printf("Multiplication of %d, %d is %d",a,b,c);
                break;

            case 4:
                c=a/b;
                printf("Division of %d, %d is %d",a,b,c);
                break;

            case 5:
                c=a%b;
                printf("Modulo Division of %d, %d is %d",a,b,c);
            	break;

            default:
            	printf("exit");
            	break;
        }
    }
while(choice>5);

}
