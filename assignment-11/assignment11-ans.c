#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_CAPACITY 3

int main(void) {
    char answer[] = "y";
    double *nums = malloc(INITIAL_CAPACITY * sizeof(double));
    if (!nums) {
        fprintf(stderr, "Failed to allocates score array\n");
        return 1;
    }

    int capacity = INITIAL_CAPACITY;

    int total_num = 0;
    for (; strcmp(answer, "y") == 0; total_num++) {
        if (total_num == capacity) {
            capacity *= 2;
            nums = realloc(nums, capacity * sizeof(double));
            if (!nums) {
                fprintf(stderr, "Failed to allocates score array\n");
                return 1;
            }
        }

        printf("Enter a test score: ");
        scanf("%lf", nums + total_num);
        printf("Would you like to continue? y/n ");
        scanf("%s", answer);
    }

    double sum = 0;
    for (int i = 0; i < total_num; ++i) {
        sum += nums[i];
    }

    printf("%f\n", sum);

    printf("%.2f is the average score.", (sum / total_num));
    free(nums);
    return 0;
}