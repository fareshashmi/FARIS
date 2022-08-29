#include <stdio.h>
#include <stdlib.h>
int main(){
	int num=1;
	int Square;
	
	while(num<=10){
		Square = num * num;
		printf("Square = %d\n", Square);
		num++;
	}

	return 0;
}
