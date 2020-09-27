#include <stdio.h>
#define PIE 3.14

int main() {
    float radius;
    printf("Enter the radius of your circle: ");
    scanf("%f", &radius);
    printf("The area of your circle is %f", radius * radius * PIE);
}