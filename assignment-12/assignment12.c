#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    time_t t;
    int n;
    printf("How many times would you like to flip the coin? ");
    scanf("%d", &n);
    srand((unsigned) time(&t));
    int i;
    int tail = 0, head = 0;
    for (i = 0; i < n; ++i) {
        if (rand() % 2 == 0) {
            head++;
        } else {
            tail++;
        }
    }
    printf("After flipping the coin %d times, the result were\n", n);
    printf("%d heads\n", head);
    printf("%d tails\n", tail);
}