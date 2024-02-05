#include <stdio.h>
void main()
    {
        int pps_marks;

        printf("Enter your Prog_for_problm_Solving Mark");

        scanf("%d",&pps_marks);

        switch (pps_marks / 10) 
        {
            case 9:
                printf("Grade-A");
                break;                

            case 8:
                printf("Grade-B");
                break;

            case 7:
                printf("Grade-C");
                break;

            case 6:
         	printf("Grade-D");
            	break;

            case 5:
            	printf("Grade-E");
            	break;

            default:
            	printf("Grade-R");
            	break;
        }

    }
