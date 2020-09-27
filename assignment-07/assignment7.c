#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c;
    printf("Enter the value of variable 'A': ");
    scanf("%f", &a);
    printf("Enter the value of variable 'B': ");
    scanf("%f", &b);
    printf("Enter the value of variable 'C': ");
    scanf("%f", &c);
    float delta = b * b - 4 * a * c;
    float first = (-b + sqrt(delta)) / (2 * a);
    float second = (-b - sqrt(delta)) / (2 * a);
    printf("The solution using the '+' operator is: %f\n", first);
    printf("The solution using the '-' operator is: %f\n", second);
    return 0;
}