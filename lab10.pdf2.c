#include <stdio.h>
#include <stdlib.h>
#define size 10
int main(){
    int i, arr[size];
    int sum = 0;
    printf("Enter a 10 numbers:\n"); 
    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
        sum = arr[i] ^ 2;
    }
    printf("Sum = %d\n", sum);
    
    return 0;
}}
