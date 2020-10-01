#include <stdio.h>
#include <string.h>

int main(void) {
    double sum = 0;
    double total_num = 0;
    while (1) {
        total_num++;
        int num;
        printf("Enter a test score: ");
        scanf("%d", &num);
        sum += num;
        printf("Would you like to continue? Y/N ");
        char c[1];
        scanf("%s", c);
        if (strcmp(c, "N") == 0) {
            break;
        }
    }
    printf("%f is the average\n", (sum / total_num));
    return 0;
}