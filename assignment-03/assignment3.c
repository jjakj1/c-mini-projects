#include <stdio.h>

int main() {
    char first_name[100];
    char last_name[100];
    printf("Enter your first name: ");
    scanf("%s", &first_name);
    printf("Enter your last name: ");
    scanf("%s", last_name);
    printf("Hello %s %s\n", first_name, last_name);
    return 0;
}