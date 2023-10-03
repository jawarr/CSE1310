#include <stdio.h>

//Program to convert Farenheit to Celsius

int main (void) {
	
	float farenheit;
	
	printf("Enter the temperature in Farenheit: ");
	scanf("%f", &farenheit);
	
	printf("%.0f Farenheit is equal to %.1f Celsius\n", farenheit, (farenheit - 32.0) * (5.0/9.0));
	
	return 0;
	
}
