#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i;
    int fact = 1;
    printf("Enter an integer of n: ");
    scanf("%d", &n);
    printf("\n");

    if(n < 0){
    	printf("\n Error! Factorial of a negative number doesn't exist.");
	}
    else{
        for(i = 1; i <= n; i++){
            fact *= i;
        }
        printf("Factorial of %d = %d\n", n, fact);
    }

    return 0;
}
