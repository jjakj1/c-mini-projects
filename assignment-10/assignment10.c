#include <stdio.h>

int main(void) {
    int array[10];
    printf("The array has %ld elements", sizeof(array)/sizeof(int));
    return 0;
}