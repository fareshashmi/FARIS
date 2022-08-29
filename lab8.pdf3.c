#include <stdio.h>
#include <stdlib.h>
int main(){
	int N;
	printf("Insert a number of N: ");
	scanf("%d", &N);
	
	if(N%2==0){
		printf("\n Even number.");
	}
	else{
		printf("\n Odd number.");
	}
}
