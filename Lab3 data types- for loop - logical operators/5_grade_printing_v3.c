#include <stdio.h>
int main(void){
int num;
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d", num);
    if(num > 100){
        printf("Invalid data");
		}
	else if(num >= 90){
	printf(" A grade");
		}
	else if ( num >=80){
		printf(" B grade");
		}
	else if ( num >=70){
		printf(" C grade");
		}
    else if ( num >=60){
		printf(" C grade");
		}
	else if ( num >=50){
		printf(" D grade");
		}
	else if ( num < 50){
		printf("R- Fail");
		}
    else{
        printf("Invalid data")
    }
return 0;
}
