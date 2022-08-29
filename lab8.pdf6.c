#include <stdio.h>
#include <stdlib.h>
int main(){
	float feet;
	printf("Insert a number to convrt from feet to centimeter: ");
	scanf("%f", &feet);
	
	float cm;
	cm = (feet / 3.26) * 100;
	printf("%.2f feet = %.2f cm", feet, cm);
	
	return 0;
}
