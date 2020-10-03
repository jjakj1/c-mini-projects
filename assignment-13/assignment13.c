#include <stdio.h>

int main(void) {
    int i = 0;
    int *ptr = &i;
    printf("The value of out pointer is: %p", ptr);
    return 0;
}