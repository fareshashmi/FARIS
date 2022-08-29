#include <stdio.h>
#include <stdlib.h>
int main(){
	int A;
	printf("Insert a number of A: ");
	scanf("%d", &A);
	int B;
	printf("Insert a number of B: ");
	scanf("%d", &B);
	int C;
	printf("Insert a number of C: ");
	scanf("%d", &C);
	printf("\n");
	
	if(A > B && A > C){
        printf("\n A is largest.");
	}
	else if(B > A && B > C){
        printf("\n B is largest.");
	}
	else if(C > A && C > B){
        printf("\n C is largest.");
	}
	
	return 0;
}
