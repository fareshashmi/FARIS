#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float rad;
    printf("Insert the radius of circle: ");
    scanf("%f", &rad);
    
    float area_circle;
    area_circle = 3.14 * rad * rad;
    printf("The area of circle is %.2f\n", area_circle);

    return 0;
}

