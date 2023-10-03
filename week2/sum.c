#include <stdio.h>

int main(void) {
	int a, b, sum;
	
	printf("Enter the first integer\n"); //prompt
	scanf("%d", &a);
	
	printf("Enter the second integer\n"); //prompt
	scanf("%d", &b);

	sum = a + b;
	
	printf("The sum is %d\n", sum);
	return 0;
}
