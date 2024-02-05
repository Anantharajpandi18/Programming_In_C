#include<stdio.h>

// Main function
int main(){
	// Declare two variables (say 'x' and 'y')
	// And initialize them.
	int x = 5, y = 6;

	// Assigning the result of following
	// expression to a new variable 'z'.

	int z = x++ + ++y;

	// Print 'x', 'y', and 'z'
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	return 0;

}
