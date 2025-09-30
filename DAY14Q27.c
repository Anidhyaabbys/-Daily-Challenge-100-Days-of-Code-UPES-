#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int odd = 1;
    for (int i = 0; i < n; i++) {
        sum += odd;
        odd += 2;
    }

    printf("Sum of first %d odd numbers is: %d\n", n, sum);
    return 0;
}