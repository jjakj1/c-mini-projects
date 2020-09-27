#include <stdio.h>

int main() {
    // int s;
    // printf("Enter your seconds: ");
    // scanf("%d", &s);
    // int minutes = s / 60;
    // int seconds = s % 60;
    // int hours = minutes / 60;
    // minutes %= 60;
    // printf("%d seconds is equal to %d hours, %d minutes, and %d seconds", s, hours, minutes, seconds);
    float s;
    printf("Enter your seconds: ");
    scanf("%f", &s);
    float hours = (int)(s / 3600);
    float minutes = (int)((s - hours * 3600) / 60);
    float seconds = s - minutes * 60 - hours * 3600;
    printf("%.0f seconds is equal to %.0f hours, %.0f minutes, %.0f seconds", s, seconds, minutes, hours);
}