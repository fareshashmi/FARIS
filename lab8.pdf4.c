#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Insert a number whether a temperature is above or below the freezing point:\n");
	scanf("%d", &n);
	
	if(n > 0){
		printf("\n Above the freezing point.");
	}
	else if(n < 0){
		printf("\n Below the freezing point.");
	}else{
		printf("\n At the freezing point.");
	}
		
	return 0;	
}
