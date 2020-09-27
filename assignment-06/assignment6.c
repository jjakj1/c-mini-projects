#include <stdio.h>

int main(void) {
    int numerator;
    int demoninator;
    printf("Enter a numerator: ");
    scanf("%d", &numerator);
    printf("Enter a demoniator: ");
    scanf("%d", &demoninator);
    
    if (numerator % demoninator != 0) {
        printf("There is a reminder!");
    } else {
        printf("There is not a reminder!");
    }
    return 0;
}