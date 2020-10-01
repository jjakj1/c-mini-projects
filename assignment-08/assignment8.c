#include <stdio.h>

int main(void) {
    int input;
    printf("Enter a number between 1 and 500: ");
    scanf("%d", &input);
    printf("Your number is between ");
    if (1 <= input && input <= 100) {
        printf("1 and 100!\n");
    } else if (101 <= input && input <= 200) {
        printf("101 and 200!\n");
    } else if (201 <= input && input <= 300) {
        printf("201 and 300!\n");
    } else if (301 <= input && input <= 400) {
        printf("301 and 400!\n");
    } else {
        printf("401 and 500!\n");
    }
    return 0;
}