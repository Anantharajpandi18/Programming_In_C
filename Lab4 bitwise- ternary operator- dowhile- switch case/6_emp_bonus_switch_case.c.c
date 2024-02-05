// Switch case
#include <stdio.h>
    void main()
    {
        int no_of_years;

        printf("Years_Employed");
        scanf("%d",&no_of_years);

        switch (no_of_years)
        {
            case 1:
                printf("Bonus = 100");
                break;

            case 2:
                printf("Bonus = 200");
                break;

            case 3:
                printf("Bonus = 300");
                break;
            case 4:
                printf("Bonus = 400");
                break;
            case 5:
                printf("Bonus = 500");
                break;

            case 6:
                printf("Bonus = 600");
                break;
            case 7:
                printf("Bonus = 700");
                break;

            default:
            	printf("Bonus = 800");
            	break;
        }
    }

/*
1 2 3 4 5 6

1 100
2 200
3 400
above 3 year 800

*/
