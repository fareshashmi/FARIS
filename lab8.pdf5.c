#include <stdio.h>
#include <stdlib.h>
int main(){
	float fahrenheit;
	printf("Insert a number for fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	float celsius;
	celsius = (fahrenheit - 32) * 5 / 9;
	
	printf("%.2f fahrenheit = %.2f celsius", fahrenheit, celsius);
	
	return 0;
}
