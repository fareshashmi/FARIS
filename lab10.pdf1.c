#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	float arr[8], sum = 0.0, ave;
	
	printf("Enter 8 elements:\n");
	for(i=0; i<8; i++){
		scanf("%f", &arr[i]);
		sum += arr[i];
	}
	ave = sum / 8;
	printf("The average of the entered values in the array is %.2f", ave);
	
	return 0;
}
