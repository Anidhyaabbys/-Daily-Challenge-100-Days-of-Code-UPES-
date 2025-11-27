#include <stdio.h>

void printBinary(int num) {
    int mask = 1 << 31;
    int started = 0;

    printf("Binary: ");
    for (int i = 0; i < 32; i++) {
        if (num & mask) {
            printf("1");
            started = 1;
        } else if (started) {
            printf("0");
        }
        mask >>= 1;
    }

    if (!started) {
        printf("0");
    }

    printf("\n");
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    printBinary(number);

    return 0;
}